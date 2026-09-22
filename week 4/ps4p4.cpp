#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    // Define Variables 
    string aName; 
    double aCost, warranty, total;

    // Input Phase 
    
    cout << "Enter Appliance Cost: ";
    cin >> aCost;

    cout << " Enter Appliance Name: ";
    cin >> aName; 

    // Process Phase 

      if (aCost > 1000.00) {
        warranty = aCost * 0.10;
    } else {
        warranty = aCost * 0.05;
    }

    total = aCost + warranty;

     cout << fixed << setprecision(2);
    cout << "Appliance Name: " << aName << endl;
    cout << "Cost:   "<< aCost << endl;
    cout << "Warranty Cost: " << warranty << endl;
    cout << "Total: " << total << endl;






return 0;
}