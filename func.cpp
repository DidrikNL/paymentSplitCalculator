#include "func.h"
#include <vector>
#include <iostream>

void howMuchToPay(vector<Person> &vec, double cost) {

    double sumPays = 0.0;
    for (vector<Person>::iterator it = vec.begin(); it != vec.end(); it++) {
        Person &p = *it;
        if (p.maxVal==-1) {
            p.maxVal=cost;
        }
        sumPays += p.maxVal;
    }

    if (sumPays >= cost) {
        double c = cost/sumPays;
        for (vector<Person>::iterator it = vec.begin(); it != vec.end(); ++it) {
            Person &p = *it;
            p.setPayVal(p.maxVal*c);
            
        }
    
    } else {
        cout << "There is not enough money, try again" << endl;
    }


}
