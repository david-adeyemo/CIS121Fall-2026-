#include <iostream>
#include <iomanip>
using namespace std;
 
const double TAX_RATE = 0.07;
 

void calcOrder(int numWidgets, double &costPerWidget, double &extendedPrice,
               double &salesTax, double &totalOrder)
{
    // Cost table
    if (numWidgets >= 10000)
        costPerWidget = 4.00;
    else if (numWidgets >= 5000)
        costPerWidget = 5.00;
    else
        costPerWidget = 10.00;
 
    extendedPrice = numWidgets * costPerWidget;
    salesTax      = extendedPrice * TAX_RATE;
    totalOrder    = extendedPrice + salesTax;
}

int main() 
{

    int numWidgets;
    double costPerWidget, extendedPrice, salesTax, totalOrder;
    int grandTotal= 0;

    cout << fixed << setprecision(2);
    cout << "Enter number of widgets (ctrl + D to quit): ";

    while (cin >> numWidgets)
    {
        calcOrder(numWidgets, costPerWidget, extendedPrice, salesTax, totalOrder);

        cout << "Number of Widgets: " << numWidgets << endl;
        cout << "Cost per Widget: $" << costPerWidget << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Sales Tax: $" << salesTax << endl;
        cout << "Total Order: $" << totalOrder << endl;

        grandTotal += totalOrder;

        cout << "Enter number of widgets (ctrl + D to quit): ";
    }

    cout << "Grand Total: $" << grandTotal << endl;

    return 0;

}