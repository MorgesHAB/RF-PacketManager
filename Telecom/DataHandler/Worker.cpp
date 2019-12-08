/*!
 * \file Worker.cpp
 *
 * \brief Worker module implementation
 *
 * \author      ISOZ Lionel - EPFL EL BA3
 * \date        05.12.2019	
 */

#include "Worker.h"

Worker::Worker(std::shared_ptr<Connector> connector) : connector(connector) {}


void Worker::mainRoutine() {
    // RF packet handler
    DataHandler dataHandler(connector);

    // Wait that we clicked on Active Xbee
    while (!connector->getData<bool>(ui_interface::ACTIVE_XBEE));
    // Your RF modem    // Can use eg:      LoRa loRa;
    Xbee xbee("/dev/ttyS3");
    std::cout << "Xbee init now" << std::endl;

    while (connector->getData<bool>(ui_interface::RUNNING)) {
        if (xbee.receive(dataHandler)) {
            dataHandler.printLastRxPacket();
        }
    }
}