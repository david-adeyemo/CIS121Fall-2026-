 #include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double RATE_PER_CREDIT = 250.00;

void calcTuition (double creditHours, double financialAid, double &tuition, double &tuitionOwed)
{
    tuition = creditHours * RATE_PER_CREDIT;
    tuitionOwed = tuition - financialAid;
}

int main() 
{


    string lname;
    double creditHours, financialAid, tuition, tuitionOwed;
    int count= 0;
    double totalOwed = 0;

    cout << fixed << setprecision(2);
    cout << "Enter Last Name, Credit Hours, Financial Aid (ctrl + D to quit): ";

    while (cin >> lname >> creditHours >> financialAid)
    {
        calcTuition(creditHours, financialAid, tuition, tuitionOwed);

        cout << " Student Last Name: " << lname << endl;
        cout << "Credit Hours: " << creditHours << endl;
        cout << "Financial Aid: $" << financialAid << endl;
        cout << "Tuition: $" << tuition << endl;
        cout << "Tuition Owed: $" << tuitionOwed << endl;

        totalOwed += tuitionOwed;
        count++;

        cout << "Enter Last Name, Credit Hours, Financial Aid (ctrl + D to quit): ";
    }

    cout << "You entered " << count << " sets of data." << endl;
    cout << "Total Tuition Owed: $" << totalOwed << endl;

    if (count > 0)
    {
        double averageOwed = totalOwed / count;
        cout << "Average Tuition Owed: $" << averageOwed << endl;
    }

    return 0;
}