//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_ISEARCHER_H
#define SOLIDPROJECT_ISEARCHER_H

#include <vector>
#include "Searchable.h"

template <class T>
class Searcher{
public:
    virtual vector<State<T>*> search (Searchable<T>* searchable) = 0;

    virtual int getNumberOfNodesEvaluated() = 0;

    virtual double getPathCost() = 0;
};

#endif //SOLIDPROJECT_ISEARCHER_H
