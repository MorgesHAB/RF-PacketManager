/*!
 *      ______ _____ _______      _____  _____     ___   ___ ___   ___
 *     |  ____|  __ \__   __|    / ____|/ ____|   |__ \ / _ \__ \ / _ \
 *     | |__  | |__) | | |      | |  __| (___        ) | | | | ) | | | |
 *     |  __| |  _  /  | |      | | |_ |\___ \      / /| | | |/ /| | | |
 *     | |____| | \ \  | |      | |__| |____) |    / /_| |_| / /_| |_| |
 *     |______|_|  \_\ |_|       \_____|_____/    |____|\___/____|\___/
 *
 * \file GSE.cpp
 *
 * \brief Ground Support Equipment Transceiver
 *
 * \author      ISOZ Lionel - EPFL EL BA3
 * \date        04.11.2019
 */

#include <LoRa.h>
#include <DataHandler.h>


int main(int argc, char** argv) {
    // Your RF modem
    LoRa loRa;
    // RF packet handler
    DataHandler dataHandler;

    if (argc == 2) {
        PacketID type = (PacketID) atoi(argv[1]);
        dataHandler.update(type);
        loRa.send(dataHandler.getPacket(type));
        return 0;
    }

    while (true) {
        dataHandler.update(PAYLOAD);
        loRa.send(dataHandler.getPacket(PAYLOAD));

        dataHandler.update(PROPULSION);
        loRa.send(dataHandler.getPacket(PROPULSION));
        usleep(100000);
    }

    return 0;
}