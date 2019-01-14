//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_CACHEMANAGER_H
#define SOLIDPROJECT_CACHEMANAGER_H

template<class Problem, class Solution>
class CacheManager {
public:
    virtual bool isExist(const Problem &problem) const = 0;

    virtual Solution popSolution(const Problem &problem) const = 0;

    virtual bool addSolution(const Problem &problem, const Solution &solution) = 0;
};

#endif //SOLIDPROJECT_CACHEMANAGER_H
