#include <iostream>
#include <iomanip>
using namespace std;
 
const double TAX_RATE = 0.07;
 
// quantity and price are passed by value;
// total, tax and totalOrder are passed by reference.
void calcOrder(int quantity, double price,
               double &total, double &tax, double &totalOrder)
{
    total = quantity * price;
    tax = total * TAX_RATE;
    totalOrder = total + tax;
}
 
int main()
{
    int quantity;
    double price;
    double total, tax, totalOrder;
    double sumTotals = 0.0;
    double sumTax = 0.0;
 
    cout << fixed << setprecision(2);
    cout << "Enter quantity and price (Ctrl+Z then Enter to stop): ";

    while (cin >> quantity >> price)
    {
        calcOrder(quantity, price, total, tax, totalOrder);
 
        cout << "Total:       $" << total
             << " Tax:         $" << tax
             << " Total Order: $" << totalOrder << endl;
 
        sumTotals += total;
        sumTax += tax;
 
        cout << "Enter quantity and price (Ctrl+Z then Enter to stop): ";
    }

    cout << "Sum of Totals: $" << sumTotals << endl; 
    cout << "Sum of Tax:    $" << sumTax << endl;
    
    return 0;

}