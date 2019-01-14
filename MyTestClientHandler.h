//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_MYTESTCLIENTHANDLER_H
#define SOLIDPROJECT_MYTESTCLIENTHANDLER_H


#include <vector>
#include "ClientHandler.h"
#include "CacheManager.h"
#include "Lexer.h"
#include "FileCacheManager.h"
#include "MatrixSearchable.h"
#include "HandleSolver.h"

namespace server_side {
    class MyTestClientHandler : public ClientHandler {
    private:
        Solver<MatrixSearchable *matrix, std::vector<std::string>> *solver;
        CacheManager<std::string,std::vector<std::string>> *cacheManager;
        Lexer *lex;

    public:
        MyTestClientHandler(std::vector<Searcher<State *> *> &solvers,
        CacheManager<std::string, std::vector<std::string>> *cacheManager1) {
            solver = new HandleSolver(solvers);
            cacheManager = cacheManager1;
            lex = new Lexer();
        };

        void handleClient(int socket) override;
    };
}


#endif //SOLIDPROJECT_MYTESTCLIENTHANDLER_H
