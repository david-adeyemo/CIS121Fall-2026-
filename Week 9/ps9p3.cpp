#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;
 
const double COST_PER_GALLON = 3.50;
 
double milespergallon (double miles , double gallons)
{
    if (gallons <= 0.00 || miles <= 0.00)
        return 0.00; 
        
    return miles / gallons;

}

double gasCost (double gallons)
{
   return gallons * COST_PER_GALLON;
}

int main()
{

 string city;
    double miles, gallons, mpg,cost;
    double totalCost = 0.0; 

    cout << fixed << setprecision(2);
    cout << " Enter city , miles travelled, and gallons used, enter CTRL + Z/D" << endl;

    cout << " City: ";
    cout << " Miles travelled: ";
    cout << " Gallons: ";
    while (getline(cin, city))
    {
        cout << "Miles travelled: ";
        if (!(cin >> miles))
            break;
 
        cout << "Gallons used: ";
        if (!(cin >> gallons))
            break;
 
        // clear the leftover newline so the next getline works
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
        if (gallons <= 0)
        {
            cout << "Gallons must be greater than 0. Trip not counted.";
        }
        else
        {
            mpg = milespergallon(miles, gallons);
            cost = gasCost(gallons);
            totalCost += cost;
 
            cout << "Destination:      " << city <<endl;
            cout << "Miles per gallon: " << mpg <<endl;
            cout << "Cost of gas:      $" << cost << endl;
        }
 
        cout << "Destination city: ";
    }
 
    cout << "\n\n";
    cout << "Total cost of gas: $" << totalCost << "\n";
 
    return 0;


}