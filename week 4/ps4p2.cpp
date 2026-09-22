#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    // Declare Variables 
    char item; 
    int quantity;
    double unitprice, extendedprice; 

    // Input Phase 

    cout<< "Enter item and quantity (A or B)";
    cin >> item >> quantity; 

    if ( item == 'A' || item == 'a') {
        unitprice = 10.00;
    } else if ( item == 'B' || item == 'b') {
        unitprice = 20.00;
    } else {
        cout << "Invalid entry entered" << endl;
    }

    // Process Phase 

    extendedprice = unitprice * quantity;
   
    cout << fixed << setprecision (2)<< endl;
    cout << "Item: " << item << endl;
    cout << " Unit Price: " << unitprice << endl;
    cout << "Extended Price: " << extendedprice << endl;  

return 0;
}