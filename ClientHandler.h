//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_CLIENTHANDLER_H
#define SOLIDPROJECT_CLIENTHANDLER_H

#include <iostream>
#include "Server.h"

namespace server_side {
    class ClientHandler {
    public:
        virtual void handleClient(int socket) = 0;
    };
};
#endif //SOLIDPROJECT_CLIENTHANDLER_H
