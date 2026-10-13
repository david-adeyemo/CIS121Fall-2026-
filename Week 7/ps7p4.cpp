#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main () {
// Input Phase
    const double L_RATE = 25.0;
    const double A_RATE = 30.0;
    const double J_RATE = 50.0;
    const double OVERTIME_HOURS = 40.0;
    const double OVERTIME_FACTOR = 1.5;

    string lname;
    char jobCode;
    double hrs, rate, pay;
    double total_pay = 0.0;
    int employee_count = 0;
    double  sum_pay = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, job code, and hours worked for each employee. Press Ctrl+D then Enter to stop." << endl;

// Processing Phase 

// Priming read 
cout << " Last Name: ";
getline (cin, lname);

    while (cin) {
        cout << " Job Code: ";
        cin >> jobCode;
        cout << " Hours Worked: ";
        cin >> hrs;
        cin.ignore(100, '\n'); // Ignore the newline character after reading hours

        // Determine pay rate based on job code
        switch (toupper(jobCode)) {     // Convert job code to uppercase for case-insensitive comparison
            case 'L':
                rate = L_RATE;
                break;
            case 'A':
                rate = A_RATE;
                break;
            case 'J':
                rate = J_RATE;
                break;
            default:
                cout << " Invalid job code. Please enter L, A, or J." << endl;
                continue; // Skip to the next iteration of the loop
        }

        // Calculate pay with overtime consideration
        if (hrs > OVERTIME_HOURS) {
            pay = (OVERTIME_HOURS * rate) + ((hrs - OVERTIME_HOURS) * rate * OVERTIME_FACTOR);
        } else {
            pay = hrs * rate;
        }

        total_pay += pay; // Accumulate total pay
        employee_count++;  // Increment employee count

        cout << " Employee: " << lname << ", Pay: $" << pay << endl;

        // Read the next employee
        cout << " Last Name: ";
        getline(cin, lname);
    }

    if (employee_count > 0) {
        sum_pay = total_pay / employee_count; // Calculate average pay
    }

    cout << " Summary of employees processed: " << endl;
    cout << " Total Pay: $" << total_pay << endl;
    cout << " Number of Employees Entered: " << employee_count << endl;
    cout << " Average Pay: $" << sum_pay << endl;

    return 0;


}

