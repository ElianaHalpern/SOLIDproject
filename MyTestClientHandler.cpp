//
// Created by eliana on 1/14/19.
//

#include <cstring>
#include <zconf.h>
#include "MyTestClientHandler.h"

void server_side::MyTestClientHandler::handleClient(int sockID) {
    int newSocket = sockID;
    ssize_t n;
    std::vector<std::string> buff;
    std::string toMap = "";
    char line[1024];
    while (true) {
        memset(line, 0, 1024);
        n = read(newSocket, line, 1024);
        if (!strcmp(line, "end"))
            break;
        line[n] = 0;
        if (n == 0) {
            close(newSocket);
            break;
        }
        buff.emplace_back(line);
        toMap += line;
    }

    MatrixArgs args;
    bool sendToClient = true;
    if (m_cache->isExist(toMap)){
        std::vector<std::string> answer = m_cache->getAnswer(toMap);
        sendToClient = false;
        for(std::string s : answer){
            sendFunc(s,newSocket);
        }
    }
    if (sendToClient){
        args = m_lexer->FullLexer(buff);
        MatrixSearcher *problem =
                new MatrixSearcher(args.matrix,args.startPos,args.goalPos);
        std::vector<std::string> solutions;
        solutions = m_solver->solve(problem);
        m_cache->addAnswerAndQuestion(toMap,solutions);
        for(std::string s : solutions){
            sendFunc(s,newsockfd);
        }
    }
}