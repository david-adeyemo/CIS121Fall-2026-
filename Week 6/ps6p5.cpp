#include <iostream>
#include <iomanip>
#include <string>
#include <cctype> // for std::toupper
using namespace std;

int main() {

    // Declare Variables 
    char jobCode;
    double hrs, rate=0.0, gPay; // rate is initialized to 0.0
    string lname;

    // Input Phase 

    cout << "Enter Last Name :";
    cin >> lname;

    cout << " Enter Job Code (L,J,A) :";
    cin >> jobCode;
    jobCode = toupper(jobCode); // Convert to uppercase

    cout << "Enter Hours Worked :";
    cin >> hrs;

    // Processing Phase 

    if (jobCode == 'L') 
    {
        rate = (hrs > 40) ? 50.00 : 40.00; // use ternary operator to determine rate based on hours worked
    
    } else if (jobCode == 'J') 
    {
        rate = (hrs > 60) ? 100.00 : 75.00; 
    } 
    else if (jobCode == 'A') 
    {
        rate = (hrs > 40) ? 25.00 : 20.00; 
    } 
    else 
    {
        cout << "Please enter valid Job Code (L, J, or A)." << endl;
        return 1; // Exit the program with an error code
    }

    gPay = hrs * rate; 

    cout << fixed << setprecision(2); 
    cout << "Employee Last Name: " << lname << endl;
    cout << "Job Code: " << jobCode << endl;
    cout << "Rate per Hour: $" << rate << endl;
    cout << "Gross Pay: $" << gPay << endl;


    


}