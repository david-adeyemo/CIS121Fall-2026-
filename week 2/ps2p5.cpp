#include <iostream>
using namespace std;
int main()
{
      
    // Define variables
        float item, discnt;
        float discountPrice, discountAmount;

        // Input Phase 
        cout << "Enter the item number:";
            cin >> item;

        cout << " Enter the discount price:";
        cin >> discnt;

        // Process Phase 
            discountPrice = item -(item * discnt);
            discountAmount = item - discountPrice;
            cout << "Discount Price is: " << discountPrice << endl;
            cout << " Discount Amount is: " <<discountAmount << endl;

        
            return 0;



}  