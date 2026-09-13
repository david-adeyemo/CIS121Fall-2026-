#include <iostream> 
#include <iomanip>  // used for significant figures
using namespace std;

int main() {

    // define variables 
    double mtotal, tip, total_with_tip;
    const double tip_percentage = 0.15; // constant variable for tip percentage

    // Input Phase 

    cout << "Enter the meal total: :";
    cin >> mtotal;

    // Processing Phase 
    tip = mtotal * tip_percentage;
    total_with_tip = mtotal + tip;
    cout << " " << mtotal << endl;
    cout << " " << fixed << setprecision (2) << tip << endl;
    cout << " "<< fixed << setprecision (2) << total_with_tip << endl;

    return 0;
}