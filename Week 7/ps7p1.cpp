#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Input Phase 

const int discount_threshold = 1000;
const double discount_rate = 0.10;

int quantity; 
double price, extended_price, discount, discounted_price, total;

    cout << fixed << setprecision(2);
    cout << "Enter quantity and price for each entry. Press Ctrl+D then Enter to stop.";
    cin >> quantity >> price;

    // Processing Phase 

       // Priming read
    cout << "Quantity: ";
    cin >> quantity;
 
    while (!cin.eof())
    {
         cout << "Price: ";
        cin >> price;
 
        extended_price = quantity * price;
 
        if (quantity > discount_threshold)
            discount = extended_price * discount_rate;
        else
            discount = 0.0;
 
        discounted_price = extended_price - discount;
        total += discounted_price;     // accumulate total 

        cout << " Quantity:         " << quantity << endl;
        cout << " Price:            $" << price << endl;
        cout << " Extended price:   $" << extended_price << endl;
        cout << " Discount amount:  $" << discount<< endl;
        cout << " Discounted price: $" << discounted_price << endl;
        cout << "Total: $" << total << endl;
        // Read the next entry
        cout << "Quantity: ";
        cin >> quantity;

        return 0;
}

}