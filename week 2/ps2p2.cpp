#include <iostream>
using namespace std;
int main()
{
    // Define variables
    float hrs, prate, gpay;
    string lname;

    // Input Phase
    cout << " Enter the last name:";
    cin >> lname;
    cout << " Enter the hours worked:";
    cin >> hrs;
    cout << " Enter the pay rate:";
    cin >> prate;

    // Process Phase
    gpay = hrs * prate;

    cout << " Employee Name: " << lname << endl;
    cout << " Gross Pay: " << gpay << endl;

    return 0;
}