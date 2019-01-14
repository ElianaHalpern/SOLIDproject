//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_SOLVER_H
#define SOLIDPROJECT_SOLVER_H

template<class Problem, class Soultion>
class Solver {
public:
    virtual Soultion solve(Problem) = 0;
};

#endif //SOLIDPROJECT_SOLVER_H
