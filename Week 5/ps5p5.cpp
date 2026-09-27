#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // declare variables
    float rate;  
    double weight, total;

    // Input Phase 

    cout << " Enter weight of metal (Lbs): ";
    cin >> weight;

    // Process Phase 
     
    if (weight> 100) {
        rate = .50;
    } else if (weight >= 30) {
        rate = 0.25;
    } else if (weight > 20) {
        rate = .20;
    } else {
        rate = .10;
    }

     total = weight * rate;

    cout << fixed << setprecision (2);
    cout << " Weight (Lbs):"<< weight << endl;
    cout << "Rate:" << rate << endl;
    cout << "Total:" << total << endl;


return 0;



}