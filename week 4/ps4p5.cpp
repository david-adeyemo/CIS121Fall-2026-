
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {
    // Define Variables 
    
    string lastName;
    int dependents;
    double grossincome, adjustedGrossIncome, taxrate, incometax;
 
    // Input Phase 
    cout << "Enter last name: ";
    cin >> lastName;
 
    cout << "Enter number of dependents: ";
    cin >> dependents;
 
    cout << "Enter gross income: ";
    cin >> grossincome;
 
    adjustedGrossIncome = grossincome - (dependents * 12000.00);
 
    if (adjustedGrossIncome > 50000.00) {
        taxrate = 0.20;
    } else {
        taxrate = 0.10;
    }
 
    incometax = adjustedGrossIncome * taxrate;
 
    if (incometax < 0) {
        incometax = 100.00;
    }
 
    cout << fixed << setprecision(4);
    cout << "Last Name:  " << lastName << endl;
    cout << "Gross Income:  " << grossincome << endl;
    cout << "Number of Dependents:  " << dependents << endl;
    cout << "Adjusted Gross Income:  " << adjustedGrossIncome << endl;
    cout << "Income Tax:  " << incometax << endl;
 
    return 0;
}