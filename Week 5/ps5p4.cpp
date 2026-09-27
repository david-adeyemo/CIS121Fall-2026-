#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare Variables 

    double asalary, trate, owing;

    // Input Phase 

    cout << "Enter your salary: ";
    cin >> asalary;
     
    // Process Phase 

    if (asalary > 100000) {
        trate = .40; 
    } else if ( asalary >= 50000) {
        trate = .35;
    } else  {
        trate = .25;
    }

    owing = asalary * trate;

    cout << fixed << setprecision(2);
    cout << "Salary: "<< asalary << endl;
    cout << "Tax Rate: " << trate << endl; 
    cout << "Tax Amount Owed" << owing << endl;

    return 0;

    }
