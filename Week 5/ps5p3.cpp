#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    // Declare Variables 
    string e_lname;
    char jobCode;
    double hrs, prate, tpay;
     
    // Input Phase 

    cout << "Enter employee last name and hours worked";
    cin >> e_lname >> hrs;
    cout << "Enter job code";
    cin >> jobCode;

    // Process Phase 

    if (jobCode == 'E' || jobCode == 'e')
    {
        prate = 25.00;
    } else if ( jobCode == 'J' || jobCode == 'j')
    {
        prate = 20.00;
    }else if (jobCode == 'A' || jobCode == 'a')
    {
        prate = 15.00;
    } else 
    {
        cout << " Invalide Job Code Entry" <<endl;
    }

    tpay = hrs * prate;

    cout << fixed << setprecision(2);
    cout << " Last Name:" << e_lname << endl;
    cout << " Hours Worked: " << hrs << endl;
    cout << " Job Code: " << jobCode << endl;
    cout << " Total Amount Paid: " << tpay << endl;
    return 0;


}