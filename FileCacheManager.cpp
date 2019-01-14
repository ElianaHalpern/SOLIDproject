//
// Created by eliana on 1/14/19.
//

#include "FileCacheManager.h"

bool server_side::FileCacheManager::isExist(const std::string &problem) const {
    return problemsAndSolutions.find(problem) != problemsAndSolutions.end();
}

std::vector<std::string> server_side::FileCacheManager::popSolution(const std::string &problem) const {
    return problemsAndSolutions.find(problem)->second;
}

bool server_side::FileCacheManager::addSolution(const std::string &problem,
                                                const std::vector<std::string> &solution) {
    if (isExist(problem)) {
        return false;
    } else {
        problemsAndSolutions.insert({problem, solution});
        return true;
    }
}