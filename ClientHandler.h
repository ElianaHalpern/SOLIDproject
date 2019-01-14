//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_CLIENTHANDLER_H
#define SOLIDPROJECT_CLIENTHANDLER_H

#include <iostream>
#include "CacheManager.h"

using namespace std;

class ClientHandler {
protected:
    CacheManager *cacheManager;

public:
    ClientHandler(CacheManager *cacheManager1) {
        this->cacheManager = cacheManager1;
    }

    virtual void handleClient(int SockID) = 0;
};

#endif //SOLIDPROJECT_CLIENTHANDLER_H
