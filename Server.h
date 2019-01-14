//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_SERVER_H
#define SOLIDPROJECT_SERVER_H

#include "ClientHandler.h"

using namespace std;

namespace server_side {
    class Server {
    public:
        virtual void open(int port, ClientHandler *clientHandler) = 0;

        virtual void stop() = 0;

        virtual bool accept() = 0;
    };
}

#endif //SOLIDPROJECT_SERVER_H
