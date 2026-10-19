#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double rate_per_credit= 250.00;  // rate per credit hour
double computeTuition (int credits) // returns tuition for a given number of credits
{
    return credits * rate_per_credit;
}

int main () 
{
    string lastName;
    int credits;
    int count= 0;
    double totalTuition= 0.0;
    double tuition;

    cout << fixed << setprecision(2);
    cout << "Enter last name and number of credits, press Ctrl+Z/ Ctrl+D to end input: " << endl;
    
    cout << " Last Name and Number of Credits: ";
    while (cin >> lastName >> credits)
    { 
        tuition = computeTuition(credits);
        totalTuition += tuition;
        count++;
 
        cout << "Last Name:     " << lastName << endl;
        cout << "Credits Taken: " << credits << endl;
        cout << "Tuition Owed:  $" << tuition << endl;
 
        cout << "Last name Number of credits: ";
    }
    
    cout << "\n\n";
    cout << "Number of students: " << count << "\n";
    cout << "Total tuition:      $" << totalTuition << "\n";

    return 0;

}