#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    // Declare Variables 

    int pNumber, qty;
    double costPerUnit, total;

    // Input Phase 

    cout << "Enter part number (10, 99, 55, 70, 50):";
    cin >> pNumber;

    cout << "Enter quantity purchased :";
    cin >> qty;

    // Processing Phase 

    if (pNumber == 10 && qty > 1000) {
        costPerUnit = 1.00;
    }
    else if (pNumber == 99 && qty > 500) {
        costPerUnit = 2.00;
    }
    else {
        costPerUnit = 5.00;   
    }

    total = qty * costPerUnit;

      cout << fixed << setprecision(2);
    cout << "Part number: " << pNumber << endl;
    cout << "Cost per unit: $" << costPerUnit << endl;
    cout << "Total cost: $" << total << endl;

    return 0;
}