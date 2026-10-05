#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main() {

    // Declare Variables
    char eCode, dCode;
    double cost;
    string lname;
    
    // Input Phase
    
    cout << "Enter Renter Last Name: ";
    cin >> lname;

    cout << "Enter Equipment Code (A,B,C): ";
    cin >> eCode;
    eCode =  toupper (eCode); // Convert to uppercase

    cout << "Enter Day Code (F= Full Day or H= Half day): ";
    cin >> dCode;
    dCode =  toupper (dCode); // Convert to uppercase

    // Processing Phase 

    if (eCode == 'A' && dCode == 'F')
    {
        cost = 10.00;
    
    } else if (eCode == 'A' && dCode == 'H')
    {
        cost = 15.00;
    
    } else if (eCode == 'B' && dCode == 'F')
    {
        cost = 20.00;
    
    } else if (eCode == 'B' && dCode == 'H')
    {
        cost = 35.00;
    
    } else if (eCode == 'C' && dCode == 'H')
    {
        cost = 40.00;
    
    } else if (eCode == 'C' && dCode == 'F')
    {
        cost = 45.00;
    
    } else 
    {
        cost = 50.00; // Default cost for invalid input

    }

    cout << fixed << setprecision(2);
    cout << "Renter Last Name:  " << lname << endl;
    cout << "Rent Cost: $" << cost << endl;


return 0;

}