//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_CACHEMANAGER_H
#define SOLIDPROJECT_CACHEMANAGER_H

using namespace std;

class CacheManager {
public:
    virtual bool isExist(string problem) = 0;

    virtual string popSolution(string problem) = 0;

    virtual void addSolution(string problem, string solution) = 0;
};

#endif //SOLIDPROJECT_CACHEMANAGER_H
