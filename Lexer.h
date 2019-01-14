//
// Created by eliana on 1/14/19.
//

#ifndef SOLIDPROJECT_LEXER_H
#define SOLIDPROJECT_LEXER_H


#include <string>
#include <vector>
using namespace std;

class Lexer {

    static const vector<double> splitByLines(string &s, const char &delimiter) {

        string buff{""};
        vector<double> v;

        for (auto n : s) {
            if (n != delimiter)
                buff += n;
            else if (n == delimiter && buff != "") {
                v.push_back(stod(buff));
                buff = "";
            }
        }
        if (buff != "")
            v.push_back(stod(buff));

        return v;

    }

};


#endif //SOLIDPROJECT_LEXER_H
