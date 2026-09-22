#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Define Variables 

    int quantity;
    double extendedprice, total, unitprice, taxtotal;
   

   // Input Phase  
    cout << " enter quantity of item: ";
    cin>> quantity;

    if (quantity >= 1000) {
        unitprice = 3.00;
    } else {
        unitprice = 5.00;
    }
   
    // Process Phase 
    extendedprice = unitprice * quantity;
    taxtotal = extendedprice * 0.07;
    total = extendedprice + taxtotal; 

 
    cout << fixed << setprecision(2);
    cout << "Quantity: "<< quantity << endl;
    cout << "Unit Price: " <<  unitprice << endl;
    cout << "Extended Price: " << extendedprice << endl; 
    cout << " Tax: "<< taxtotal << endl;
    cout << " Total Amount: " << total << endl;

return 0;
}