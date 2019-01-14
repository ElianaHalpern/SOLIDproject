//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_MATRIXSEARCHABLE_H
#define SOLIDPROJECT_MATRIXSEARCHABLE_H


#include <vector>
#include "Searchable.h"
#include "State.h"
#include "AlgoUtils.h"

typedef std::vector<std::vector<State *>>::iterator MatrixIter;

class MatrixSearchable : public Searchable<State *> {
private:
    std::vector<std::vector<State *>> myMatrix;
    State *start;
    State *goal;


public:

    MatrixSearchable(std::vector<std::vector<State*>> matrix,
                   std::pair<int, int> initial, std::pair<int, int> goal)
            : myMatrix(matrix),
              start(myMatrix[initial.first][initial.second]),
              goal(myMatrix[goal.first][goal.second]) {};


    virtual State *getGoalState() {
        return this->goal;
    }

    virtual State *getInitialState() override {
        return this->start;
    }

    virtual std::vector<State *> getAllPossibleStates(int i, int j) override {
        std::vector<State *> listOfStates;

        int jSize = myMatrix[0].size() - 1;
        int iSize = myMatrix.size() - 1;

        if (i > 0 && i <= iSize) {
            listOfStates.push_back(myMatrix[i - 1][j]);
        }
        if (i >= 0 && i < iSize) {
            listOfStates.push_back(myMatrix[i + 1][j]);
        }
        if (j > 0 && j <= jSize) {
            listOfStates.push_back(myMatrix[i][j - 1]);
        }
        if (j >= 0 && j < jSize) {
            listOfStates.push_back(myMatrix[i][j + 1]);
        }
        return listOfStates;
    }

    void resetVisited() {
        for(std::vector<State*> v : myMatrix){
            auto vecSet = [](std::vector<State*>& v) {std::for_each(v.begin(),v.end(),set) ;};
            std::for_each(v.begin(),v.end(), set);
        }
    }
};



#endif //SOLIDPROJECT_MATRIXSEARCHABLE_H
