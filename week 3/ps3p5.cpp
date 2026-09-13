#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() { 

    // Defining Variables 
    double fixed_cost, price_per_unit, cost_per_unit, break_even_point;

    // Input Phase 
    cout << "Enter the fixed cost:";
    cin >> fixed_cost;
    cout << " Enter the price per unit and cost per unit: ";
    cin >> price_per_unit >> cost_per_unit;

    // Processing Phase 
    break_even_point = fixed_cost / (price_per_unit - cost_per_unit);
 
    if (break_even_point < 0) { // for scenario where cost per unit is greater than price per unit
        cout << " Business is not profitable." <<endl;
    } else { 
    cout << fixed << setprecision (2) << endl; // set precision to 2 decimal places
    cout << ceil(break_even_point) << endl;   // use ceil function from cmath library to round up the break even point to the nearest whole number 
    cout << " You must sell " << break_even_point << " units to break even." << endl;
    }
    
   return 0; 
}
