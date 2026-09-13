#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // define variables 
    double crnstock, crnvalue; 
    int qshare;  

    // Input phase 
    cout << " Enter the current stock price and the number of shares ";
    cin >> crnstock >> qshare; 
     
    // Processing phase 
    crnvalue = crnstock * qshare;

    cout << "The current value of specific stock is: " << fixed << setprecision(2) << crnvalue << " in your portfolio" << endl;

    return 0; 
} 
