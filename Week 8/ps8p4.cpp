#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
 
// Input 
double unitPrice(char code)                        // Returns the unit price 
// Process
{
    switch (toupper(static_cast<unsigned char>(code)))
    {
        case 'W': return 10.00;
        case 'C': return 15.00;
        case 'G': return 20.00;
        default:  return 0.00;
    }
}
// Input 
double shipping(char code)                          // Returns the shipping charge 
// Process
{
    switch (toupper(static_cast<unsigned char>(code)))
    {
        case 'W': return 2.00;
        case 'C': return 5.00;
        case 'G': return 7.00;
        default:  return 0.00;
    }
}
// Input 
int main()
{
    char code;
    int count = 0;
    int qty;
    double price, ship, extended, orderTotal;
    double grandTotal = 0.0;
   
    // Process
 
    cout << fixed << setprecision(2);
    cout << "Enter product code (W, C, G) and quantity (e.g. W 3), press Ctrl+Z/ Ctrl+D to end input: " << endl;
   
 
    cout << "Product code and quantity: ";
    while (cin >> code >> qty) 
    {
        price = unitPrice(code);
        ship = shipping(code);
        extended = (price * qty) + ship;
        orderTotal = extended;
        grandTotal += orderTotal;

        count++;

 
        cout << "Product Code: " << code
             << "   Quantity: " << qty
             << "   Unit Price: $" << price
             << "   Shipping: $" << ship
             << "   Extended Price: $" << extended
             << "   Number of entries processed: "<<count
             << endl;
 
        cout << "Product code and quantity: ";
    }
     
    cout << "Grand Total: $" << grandTotal << endl; 
    
    return 0;

}
 