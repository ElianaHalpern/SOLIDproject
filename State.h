//
// Created by eliana on 1/14/19.
//
#include <utility>

using namespace std;

#ifndef SOLIDPROJECT_STATE_H
#define SOLIDPROJECT_STATE_H
class State {
private:
    double m_cost;
    State *m_cameFrom;
    bool m_visit;
    double m_path_cost;
    // the place i,j
    std::pair<int, int> m_place{-1, -1};
public:
    std::pair<int, int> getPlace() {
        return m_place;
    }

    State(std::pair<int, int> ij) : m_place(ij) {
        m_visit = false;
        m_path_cost = -1;

    };

    void setCost(double c) {
        m_cost = c;
    }

    void setCameFrom(State *st) {
        m_cameFrom = st;
    }

    double getCost() const {
        return m_cost;
    }

    double getPathCost() const {
        return m_path_cost;
    }

    void setPathCost(double c) {
        m_path_cost = c;
    }

    bool operator>(const State &st2) const {
        return (m_cost > st2.getCost());
    }

    bool operator<(const State &st2) {
        return (m_cost < st2.getCost());
    }

    bool operator==(const State &st2) {
        return (m_cost == st2.getCost());
    }

    State &operator=(const State &st2) {
        this->m_place.first = st2.m_place.first;
        this->m_place.first = st2.m_place.second;
        this->m_cost = st2.m_cost;
        this->m_cameFrom = st2.m_cameFrom;
        this->m_visit = st2.m_visit;
        return *this;
    }

    void setVisit(const bool visit) {
        m_visit = visit;
    }

    bool isVisit() {
        return m_visit;
    }

    State *getCameFrom() {
        return m_cameFrom;
    }

    bool equals(State *other) {
        return ((m_place.first == other->m_place.first) &&
                (m_place.second == other->m_place.second));
    }
};
#endif //SOLIDPROJECT_STATE_H
