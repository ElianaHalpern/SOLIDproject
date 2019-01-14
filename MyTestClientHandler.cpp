//
// Created by eliana on 1/14/19.
//

#include <sys/socket.h>
#include "MyTestClientHandler.h"

void MyTestClientHandler::handleClient(int sockID) {
    char problem[256] = "";
    string solution;
    long n;

    bzero(problem, 1024);
    n = read(sockID, problem, 1023);
    if (n < 0) {
        perror("ERROR. cant read from socket");
        exit(1);
    }
    while (strcmp(problem, "end") != 0) {
        if (cacheManager->isExist(problem)) {
            solution = cacheManager->popSolution(problem);
        } else {
            solution = solver->solve(problem);
            cacheManager->addSolution(problem, solution);
        }

        if(::send(sockID, solution.data(), solution.size(),0) < 0){
            perror("ERROR. cant write to socket");
            exit(1);
        }

        bzero(problem, 1024);
        n = read(sockID, problem, 1023);
        if (n < 0) {
            perror("ERROR reading from socket");
            exit(1);
        }
    }
    //מה קורה כשהלולאה נגמרת? קריאה לstop
}
