#include <iostream>
#include <iomanip>
using namespace std;
 
const double DISCOUNT_LIMIT = 10000.00;
const double HIGH_RATE = 0.10;               // over $10,000.00
const double LOW_RATE  = 0.05;              // $10,000.00 or less

double computeTotal(int quantity, double price)
{
    return quantity * price;
}

double computeDiscountTotal(double total)
{
    double rate, discountAmount;
 
    if (total > DISCOUNT_LIMIT)
        rate = HIGH_RATE;
    else
        rate = LOW_RATE;
 
    discountAmount = total * rate;
 
    return total - discountAmount;
}

int main()
{
    int quantity;
    double price, total, discountTotal;
    double sumTotal = 0.0;
    double sumDiscountTotal = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter quantity and price (e.g. 5 19.99).Press Ctrl+Z then Enter to stop" << endl;

    cout << "quantity and price: ";
    while (cin >> quantity >> price)
    {
         total = computeTotal(quantity, price);
        discountTotal = computeDiscountTotal(total);
 
        sumTotal += total;
        sumDiscountTotal += discountTotal;
 
        cout << "Total:          $" << total << endl;
        cout << "Discount Total: $" << discountTotal << endl;
 
        cout << "Quantity and price: ";

    }

         cout << "\n\n";
    cout << "Sum of all totals:          $" << sumTotal << endl;
    cout << "Sum of all discount totals: $" << sumDiscountTotal << endl;

    return 0;

}
 
