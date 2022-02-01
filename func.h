#pragma once
#include <string>
#include <vector>
using namespace std;


class Person {
public:
    Person(string n, double ml) {
        name = n;
        maxVal = ml;
        payVal = 0.0;
    }
    string name;
    double maxVal;
    double payVal;

    /*string name() {
        return name;
    }
    double maxVal () {
        return maxVal;
    }*/
    void setPayVal(double val) {
        payVal = val;
    }
};

void howMuchToPay(vector<Person> &vec, double cost);
