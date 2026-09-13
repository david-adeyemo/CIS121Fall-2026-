#include <iostream>
using namespace std;

int main() {

    // declare variables 
    int exm1, exm2;
    double weight1=0.6, weight2=0.4, Total_score;

    // Input phase 
    cout << "Enter the first exam grade and the second exam grade:";
    cin >> exm1 >> exm2;
    cout << "Enter weight of the first exam and the second exam:";
    cin >> weight1 >> weight2;

    // Processing phase 
    Total_score = (exm1 * weight1) + (exm2 * weight2);

    cout << "The total score is: " << Total_score << endl;

    return 0;
} 