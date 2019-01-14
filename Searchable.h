//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_SEARCHABLE_H
#define SOLIDPROJECT_SEARCHABLE_H

#include <vector>

template<class T>
class Searchable {
public:

    virtual T getInitialState() = 0;

    virtual T getGoalState() = 0;

    virtual std::vector<T> getAllPossibleStates(int i, int j) = 0;
};

#endif //SOLIDPROJECT_SEARCHABLE_H
