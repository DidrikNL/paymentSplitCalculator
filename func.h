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

    void setPayVal(double val) {
        payVal = val;
    }
};

void howMuchToPay(vector<Person> &vec, double cost);
