//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_HANDLESOLVER_H
#define SOLIDPROJECT_HANDLESOLVER_H

#include "Solver.h"

class HandleSolver
        : public Solver<MatrixSearchable *, std::vector<std::string>> {
private:
    std::vector<Searcher < State *state >*> solvers;
public:
    HandleSolver(std::vector<Searcher < State * > *

    >& s){ solvers = s; };

    std::vector<std::string> solve(MatrixSearchable *problem) override {
        std::vector<std::string> ret;
        for (Searcher < State * > *i : solvers) {
            problem->resetVisited();
            std::string tmp = i->search(problem);
            ret.push_back(tmp);
        }
        return ret;
    }
};

#endif //SOLIDPROJECT_HANDLESOLVER_H
