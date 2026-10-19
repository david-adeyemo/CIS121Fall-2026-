#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;
 
// Input 
const double OVERTIME_HOURS = 40.0;
const double OVERTIME_FACTOR = 1.5;
 
// Process
double hourlyRate(char jobCode)                 // Returns the hourly rate for a job code (0 if the code is invalid)
{
    switch (toupper(static_cast<unsigned char>(jobCode)))
    {
        case 'L': return 25.00;
        case 'A': return 30.00;
        case 'J': return 50.00;
        default:  return 0.00;
    }
}


double calculatePay(char jobCode, double hours)   // Calculates pay, with time and a half for hours over 40
{
    double rate = hourlyRate(jobCode);
 
    if (hours < OVERTIME_HOURS)
        return hours * rate;
 
    return OVERTIME_HOURS * rate
         + (hours - OVERTIME_HOURS) * rate * OVERTIME_FACTOR;
}

int main()
{
   
    // Input 
    string lastName;
    char jobCode;
    double hours, pay;
    double totalPay = 0.0;
    int count = 0;
 
    cout << fixed << setprecision(2);
    cout << "Enter last name, job code (L, A, J), and hours worked, press Ctrl+Z/ Ctrl+D to end input: " << endl;

    
    // Process
    cout << " Last Name, Job Code, and Hours Worked: ";
    while (cin >> lastName >> jobCode >> hours)
{
     if (hourlyRate(jobCode) == 0.0)
        {
            cout << "Invalid job code. Use L, A, or J." << endl;
        }
        else
        {
            pay = calculatePay(jobCode, hours);
            totalPay += pay;
            count++;
 
            cout << "Last Name: " << lastName << endl;
            cout << "Pay:       $" << pay << endl;
        }
 
        cout << "Last name, job code, hours: ";
}
    

    cout << "Number of entries: " << count << "\n";
    cout << "Total pay:         $" << totalPay << "\n";
    
    if (count > 0)
        cout << "Average pay:       $" << totalPay / count << endl;
    else
        cout << "No valid entries were made." << endl;
 
    return 0;

}
 
 