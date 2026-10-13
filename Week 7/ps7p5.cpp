#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {

// Input Phase 

    const double IN_DISTRICT_RATE  = 250.0;
    const double OUT_DISTRICT_RATE = 550.0;

    string lName;
    int creditHours;
    char districtCode;
    double rate, tuition;
     
    double total_tuition = 0.0;
    int student_count = 0;
    int total_credit_hours = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, credit hours, and district code (I or O). Press ctrl + D to stop.";
    
    cout << " Last Name: ";
    getline (cin, lName);    // Allow for last names with spaces

    while (!cin.eof()) {
        cout << " Credit Hours: ";
        cin >> creditHours;
        cin.ignore();  // Ignore the newline character

        cout << " District Code (I or O): ";
        cin >> districtCode;
        cin.ignore();  // Ignore the newline character

        // Determine the rate based on district code
        if (districtCode == 'I' || districtCode == 'i') {
            rate = IN_DISTRICT_RATE;
        } else {
            rate = OUT_DISTRICT_RATE;
        }

        // Calculate tuition
        tuition = creditHours * rate;

        // Update totals
        total_tuition += tuition;
        student_count++;
        total_credit_hours += creditHours;

        // Display current student's information
        cout << "Tuition for " << lName << ": $" << tuition << endl;

        // next student
        cout << " Last Name: ";
        getline(cin, lName);
    }

    // Display summary information
    cout << "Student Name: " << lName << endl;
    cout << " Credit Hours Taken: " << creditHours << endl;
    cout << " Tuition Cost: $" << tuition << endl;
    cout << "\nSummary Information:" << endl;
    cout << "Total Students: " << student_count << endl;
    cout << "Total Credit Hours: " << total_credit_hours << endl;
    cout << "Total Tuition: $" << total_tuition << endl;

    return 0;
}