//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_FILECACHEMANAGER_H
#define SOLIDPROJECT_FILECACHEMANAGER_H


#include <string>
#include <vector>
#include <unordered_map>
#include "CacheManager.h"

namespace server_side {
    class FileCacheManager : public CacheManager<std::string, std::vector<std::string>> {
    private:
        std::unordered_map<std::string, std::vector<std::string>> problemsAndSolutions;
    public:
        bool isExist(const std::string &problem) const override;

        std::vector<std::string> popSolution(const std::string &problem) const override;

        bool addSolution(const std::string &problem,
                         const std::vector<std::string> &solution) override;
    };
}


#endif //SOLIDPROJECT_FILECACHEMANAGER_H
