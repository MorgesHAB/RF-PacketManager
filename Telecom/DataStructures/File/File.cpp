/*!
 * \file File.cpp
 *
 * \brief File module implementation
 *
 * \author      ISOZ Lionel - EPFL EL BA3
 * \date        17.12.2019	
 */

#include "File.h"

File::File(const std::string &fileName, uint16_t bytePerPacket)
        : fileName(fileName), bytePerPacket(bytePerPacket),
          myState(SLEEP), receivedState(SLEEP),
          packetNbr(0), nbrTotPacket(0), lastPacketNbr(0), missingNbrIterator(0),
          nbrByteInLastPacket(0), nbrSentFile(0) {}

File::~File() {
    for (auto& part : file) delete[] part;
    file.clear();
}


void File::print() const {
    std::cout << "File Data " << fileName << " -- Packet n° " << packetNbr
              << " / " << nbrTotPacket - 1 << std::endl;
}

void File::updateTx(std::shared_ptr<Connector> connector) {
    switch (myState) {
        /////// On the File Receiver // updated only if need to send request (connector order)
        case SLEEP:
            myState = SEND_FILE_REQUEST_TO_TX;
            break;
        case SEND_FILE_REQUEST_TO_TX: // Sent
            myState = WAITING_PACKET;
            break;
        case SEND_MISSING_PACKET_REQUEST:
            myState = WAITING_PACKET;
            break;
        case ALL_RECEIVED:
            std::cout << "ACK : Every Packet have been received correctly" << std::endl;
            exportFile();
            break;
        default:
            break;
    }
    /////// On the File Transmitter
}

void File::write(Packet &packet) {
    /////// On the File Receiver
    packet.write((uint8_t) myState);
    // After writing state processing
    switch (myState) {
        case SENDING_PACKET:
            packet.write(packetNbr);
            if (packetNbr == 0) packet.write(nbrTotPacket);
            if (packetNbr == nbrTotPacket - 1) packet.write(nbrByteInLastPacket);

            for (size_t i(0); i < bytePerPacket; ++i) {
                packet.write(file[packetNbr][i]);
            }
            ++packetNbr;
            if (packetNbr == nbrTotPacket) myState = WAITING_MISSING_PACKET_REQUEST;
            break;
        case SEND_MISSING_PACKET_REQUEST:
            sendMissingPacket(packet);
            packet.write(lastPacketNbr);
        case SENDING_MISSING_PACKET:
            packet.write(missingPacketNbr[missingNbrIterator++]); // packet Nbr
            packet.write((uint16_t) missingPacketNbr.size());
            for (size_t i(0); i < bytePerPacket; ++i) {
                packet.write(file[missingPacketNbr[missingNbrIterator]][i]);
            }
            break;
        default:
            break;
    }
    /////// On the File Transmitter

}

void File::updateRx(std::shared_ptr<Connector> connector) {

    // build image V1 condition not good <=> if last packet
   /* if (packetNbr == lastPacketNbr && receivedState == SENDING_PACKET) { //TODO version debug V.0
        //state = SENDING_MISSING_PACKET_FIRST;
        state = SLEEP;
        exportFile();
    }*/
    switch (receivedState) {
        /////// On the File Receiver
        case SEND_MISSING_PACKET_REQUEST:
            myState = SENDING_MISSING_PACKET;
            break;
        /////// On the File Transmitter
        case SEND_FILE_REQUEST_TO_TX:
            importFile(); // TODO Manage error open file
            myState = SENDING_PACKET;
        case SENDING_MISSING_PACKET:
            connector->setData(ui_interface::SENDING_DATA, true);
            break;
        case ALL_RECEIVED:
            connector->setData(ui_interface::SENDING_DATA, false);
            myState = READY_TO_SEND_NEW_FILE;
            break;
        default:
            break;
    }
}

void File::parse(Packet &packet) {
    uint8_t statetmp;
    packet.parse(statetmp);
    receivedState = (State) statetmp;

    switch (receivedState) {
        case SENDING_MISSING_PACKET_FIRST:
            uint16_t missingPacketTotNbr;
            packet.parse(missingPacketTotNbr);
            missingPacketNbr.resize(missingPacketTotNbr, 0);
        case SENDING_MISSING_PACKET:
            packet.parse(lastPacketNbr);
        case SENDING_PACKET:
            packet.parse(packetNbr);
            if (packetNbr == 0) { // TODO while not received packet 0
                packet.parse(nbrTotPacket);
                file.resize(nbrTotPacket, nullptr);
                lastPacketNbr = nbrTotPacket - 1;
            }
            if (packetNbr < nbrTotPacket) { //security seg fault
                file[packetNbr] = new uint8_t[bytePerPacket];
                if (packetNbr == nbrTotPacket - 1) packet.parse(nbrByteInLastPacket);

                for (size_t i(0); i < bytePerPacket; ++i) {
                    packet.parse(file[packetNbr][i]);
                }
            }
            break;

        default:
            break;
    }
}

void File::sendMissingPacket(Packet &packet) {
    missingNbrIterator = 0;
    missingPacketNbr.clear();
    for(uint16_t i(0); i < file.size(); ++i) {
        if (!file[i]) missingPacketNbr.push_back(i);
    }
    myState = SENDING_MISSING_PACKET;
    lastPacketNbr = missingPacketNbr.back();
    if (missingPacketNbr.empty()) myState = ALL_RECEIVED;
}


void File::importFile() {
    // Store all bytes of the file
    std::ifstream fileIn(fileName, std::ios::in | std::ios::binary);

    if (fileIn) {
        size_t nbr(0);
        while (!fileIn.eof()) {
            file.push_back(new uint8_t[bytePerPacket]);
            nbrByteInLastPacket = 0;
            for (size_t i(0); i < bytePerPacket && !fileIn.eof(); ++i) {
                file[nbr][i] = fileIn.get();
                ++nbrByteInLastPacket;
            }
            ++nbr;
        }
        --nbrByteInLastPacket;
        nbrTotPacket = file.size();
        lastPacketNbr = nbrTotPacket - 1;
    } else
        std::cerr << "Impossible to read the file" << std::endl;
}

void File::exportFile() {
    fileName.replace(0, fileName.find('.'),
                     fileName.substr(0, fileName.find('.')) + "Rx"); // <--replace with
    std::ofstream fileOut(fileName, std::ios::out | std::ios::binary);

    if (fileOut) {
        size_t last(bytePerPacket);
        for(size_t i(0); i < nbrTotPacket; ++i) {
            if (i == nbrTotPacket - 1) last = nbrByteInLastPacket;
            if (file[i]) { // if received packet else nullptr
                for (size_t j(0); j < last; ++j) fileOut.put(file[i][j]);
            } else {
                for (size_t j(0); j < last; ++j) fileOut.put(0); // black ?
                std::cerr << "!!! packet nbr " << i << " not received !!" << std::endl;
            }
        }
        std::cout << "*** New received file is available as " << fileName << std::endl;
        fileOut.close();
    } else
        std::cerr << "Impossible to save data the file -> All data lost" << std::endl;
}