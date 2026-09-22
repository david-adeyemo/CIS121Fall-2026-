#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Define Variables 

    int numbooks;

    double cbooks, total, shipping;


    // Input Phase 

    cout << "Enter number of books and cost per books: ";
    cin >> numbooks >> cbooks;

    // Process Phase 

    total = numbooks * cbooks;

    if (total > 50.00) {
        shipping = 0.00;

    }else {
       shipping = 25.00; 
    }
    cout << fixed << setprecision(2)<< endl;
    cout << "Order Total:" << total << endl;
    cout << "Shipping charge: "<< shipping << endl;


return 0;
}


