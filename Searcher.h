//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_ISEARCHER_H
#define SOLIDPROJECT_ISEARCHER_H

#include "Searchable.h"
#include <string>

template<class T>
class Searcher {
public:
    virtual std::string search(Searchable <T> *searchable) = 0;

    virtual int getNumberOfNodesEvaluated() = 0;
};

#endif //SOLIDPROJECT_ISEARCHER_H
