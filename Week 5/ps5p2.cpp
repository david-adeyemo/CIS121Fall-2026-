#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

    // Declare variables 

        double quantity, pricePerPound, total;
    
    // Input Phase 

        cout << "Enter quantity in pounds (Lbs)";
        cin >> quantity;

    // Process Phase 

        if(quantity > 100) 
        {
            pricePerPound = 0.10;
        } else if (quantity >= 50)
        {
            pricePerPound = 0.25;
        } else 
        {
            pricePerPound = 0.50;
        }

    
        total = quantity * pricePerPound;
        
        cout << fixed << setprecision(2);
        cout << "Price Per Pound: " << pricePerPound << endl; 
        cout << "Total Amount Paid: " << total << endl;

    return 0;
            
        
    
}