//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_MAIN_H
#define SOLIDPROJECT_MAIN_H

#include <zconf.h>

namespace boot {
    class Main {
    public:
        virtual int main(int argc, char *args[]) = 0;
    };
};


#endif //SOLIDPROJECT_MAIN_H
