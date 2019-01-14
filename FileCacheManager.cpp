//
// Created by eliana on 1/14/19.
//
#include <sys/types.h>
#include "FileCacheManager.h"

//try to find the solution
bool FileCacheManager::isExist(string problem) {
    try {
        pthread_mutex_lock(&mutex);
        solutions.at(problem);
        pthread_mutex_unlock(&mutex);
        return true;
    } catch (exception &e) {
        pthread_mutex_unlock(&mutex);
        return false;
    }
}
//if the solution exist- send it to the client
string FileCacheManager::popSolution(string problem) {
    string solution;
    pthread_mutex_lock(&mutex);
    solution = solutions.at(problem);
    pthread_mutex_unlock(&mutex);
    return solution;

}
// if there is no solution- create one and save it to the map
void FileCacheManager::addSolution(string problem, string solution) {
    pthread_mutex_lock(&mutexFile);
    this->cacheFile.open("cache.txt");
    this->cacheFile << problem + "\n";
    this->cacheFile << solution + "\n";
    this->cacheFile.close();
    pthread_mutex_unlock(&mutexFile);
}