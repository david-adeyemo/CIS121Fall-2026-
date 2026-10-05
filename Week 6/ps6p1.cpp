#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

 int main() {
   
    // Define Variables 
    char cStatus;
    int widgetQty;
    double price, extPrice, tax, total;

    // Input Phase

      cout << "Enter quantity of widgets: ";
    cin >> widgetQty;

    cout << "Enter customer status: ";
    cin >> cStatus;
    cStatus = toupper(cStatus);

    // Processing Phase

      switch (cStatus) {
        case 'A':
            if (widgetQty > 10000)
                price = 10.00;
            else
                price = 30.00;
            break;

        case 'B':
            if (widgetQty > 10000)
                price = 12.00;
            else
                price = 30.00;
            break;

        case 'C':
            if (widgetQty >= 5000 && widgetQty <= 10000)
                price = 20.00;
            else
                price = 30.00;
            break;

        case 'D':
            if (widgetQty >= 5000 && widgetQty <= 10000)
                price = 22.00;
            else
                price = 30.00;
            break;

        default:
            price = 30.00;   
            break;
    }
        extPrice = widgetQty * price;
        tax = extPrice * 0.07;
        total = extPrice + tax;

        cout << fixed << setprecision(2);
        cout << "Extended price: $" << extPrice << endl;
        cout << "Tax amount: $" << tax << endl;
        cout << "Total: $" << total << endl;

    return 0;


 }