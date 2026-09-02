#include <iostream>
using namespace std;
int main()
{

    // Define variables 
    float quantity, uprice; 
    float extprice;

    // Input Phase 

    cout << "Enter the quantity:";
    cin >> quantity;

    cout << " Enter the unit price:";
    cin >> uprice;

    // Process Phase 

    extprice = quantity * uprice;
    cout << "The extended Price is: " << extprice << endl;
    

}