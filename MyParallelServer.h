//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_MYPARALLELSERVER_H
#define SOLIDPROJECT_MYPARALLELSERVER_H



#include "Server.h"

namespace server_side {
    class MyParallelServer : public Server {
    public:
        void open(int port, server_side::ClientHandler *c);

        void stop();

        bool accept();
    };
}


#endif //SOLIDPROJECT_MYPARALLELSERVER_H
