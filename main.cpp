#include "stdio.h"
#include "func.h"
#include "iostream"
#include <vector>

using namespace std;

int main () {
    vector<Person> persons;
    
    cout << "Money difference calculator\nVersion 1.0\nCopyright Didrik NL 2022" << endl;
    string input = "";

    while (input != "N") {
        string name;
        double maxVal;
        cout << "Type in name: " << endl;
        cin >> name;
        cout << "Type that persons max paymemt, (-1 for cost)" << endl;
        cin >> maxVal;
        persons.push_back(Person(name, maxVal));
        cout << "Add another person? (Y/N)" << endl;
        cin >> input;
    }
    double cost;
    cout << "Type in the cost to calculate" << endl;
    cin >> cost;

    howMuchToPay(persons, cost);

    for (vector<Person>::iterator it = persons.begin(); it != persons.end(); it++) {
        Person p = *it;
        cout << p.name << " has to pay: " << p.payVal << endl;
    }    

    return 1;
}
