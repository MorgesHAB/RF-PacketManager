/*!
 * \file DataHandler.cpp
 *
 * \brief DataHandler module implementation
 *
 * \author      ISOZ Lionel - EPFL EL BA3
 * \date        18.11.2019	
 */

#include <FrameInfo/Header.h>
#include <Avionics/GPS.h>
#include <Test/PressureData.h>
#include <Avionics/IgnitionData.h>
#include <Test/States.h>
#include <Test/Picture.h>
#include <FrameInfo/XbeeOptions.h>
#include <FrameInfo/CRC.h>
#include <Test/String.h>
#include "DataHandler.h"


DataHandler::DataHandler() : dataHandler(NBR_OF_TYPE, nullptr), lastRxID(GPSID) {
    // Create your RF Packet Datagram here
    // default protocol header ex: packet Type, packet nbr, timestamp
    for (uint8_t id(0); id < NBR_OF_TYPE; ++id) {
        dataHandler[id] = new Datagram;
        if (id != XBEE_TEST) dataHandler[id]->add(new Header(id));
    }

    dataHandler[XBEE_TEST]->add(new XbeeOptions);
    dataHandler[XBEE_TEST]->add(new PressureData);
    /* dataHandler[XBEE_TEST]->add(new Header(XBEE_TEST));
     dataHandler[XBEE_TEST]->add(new PressureData);
     dataHandler[XBEE_TEST]->add(new String("First sentence transmit via XBee !!"));
     dataHandler[XBEE_TEST]->add(new PressureData);
     dataHandler[XBEE_TEST]->add(new States({1, 0, 1, 1, 0, 0, 1, 0}));*/
    dataHandler[XBEE_TEST]->add(new CRC);

    //// Packet Type n° 1 GPS
    //dataHandler[GPSID]->add(new GPS);
    dataHandler[GPSID]->add(new PressureData);

    //// Packet Type n°2
    dataHandler[PAYLOAD]->add(new PressureData);
    dataHandler[PAYLOAD]->add(new IgnitionData);
    dataHandler[PAYLOAD]->add(new States({1, 0, 1, 1, 0, 0, 1, 0}));

    //// Packet Type n°3
    dataHandler[AVIONICS]->add(new States({1, 1, 1, 1, 0, 0, 1, 0}));

    //// Packet Type n°4
    dataHandler[PROPULSION]->add(new PressureData);
    dataHandler[PROPULSION]->add(new PressureData);

    //// Packet Type n°5
    dataHandler[IMAGE]->add(new Picture(230, "pictureZ", 50, 50));
}

DataHandler::~DataHandler() {
    for (auto& datagram : dataHandler) delete datagram;
}

void DataHandler::update(PacketID type) {
    dataHandler[type]->update();
}

void DataHandler::parse(PacketID type) {
    dataHandler[type]->parse();
}

void DataHandler::print(PacketID type) const {
    dataHandler[type]->print();
}

Packet &DataHandler::getPacket(PacketID type) {
    return dataHandler[type]->getDataPacket();
}

void DataHandler::setPacket(Packet* packet) {
    lastRxID = (PacketID) (packet->getType() % NBR_OF_TYPE); // tmp avoid seg fault
    dataHandler[lastRxID]->getDataPacket() = *packet;
    dataHandler[lastRxID]->parse();
}

void DataHandler::printLastRxPacket() const {
    dataHandler[lastRxID]->print();
}

const std::vector<Data *> &DataHandler::getDatagram(PacketID type) {
    return dataHandler[type]->getDatagram();
}

PacketID DataHandler::getLastRxID() const {
    return lastRxID;
}

void
DataHandler::writeConnector(PacketID type, std::shared_ptr<Connector> connector) {
    dataHandler[type]->writeConnector(connector);
}
