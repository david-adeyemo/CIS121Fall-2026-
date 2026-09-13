#include <iostream>
#include <iomanip>
#include <cmath> // use to remove the negative sign from the percentage change
using namespace std;

int main () {

    // Defining Variables 
    double purchase_price, current_price, percentage_change;

    // Input Phase 

    cout << "Enter the purchase price: ";
    cin>> purchase_price;
    cout << "Enter the current price: ";
    cin >> current_price;

    // Processing Phase 
    percentage_change = ((current_price - purchase_price) / purchase_price) * 100;

    cout << fixed << setprecision (2) << endl;

     if (percentage_change > 0) {
        cout << "The price of the stock increased by " << "%" << endl;
    } else if (percentage_change < 0) {
        cout << "The price of the stock decreased by " << abs(percentage_change) << "%" << endl; // absolute value to remove the negative sign
    } else {
        cout << "The price of the stock did not change." << endl;
     }
     return 0;
     }


     
     
     





