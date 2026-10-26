#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

const double overtime = 40.00;
const double overTimeFactor = 1.5;

double payRate ( char jobCode)
{
    switch (toupper(static_cast< unsigned char>(jobCode)))
    {
        case 'L': return 25.00;
        case 'A': return 30.00;
        case 'J': return 50.00;
        default : return 0.00;
    
    }
}

double grosspay(double hours, double rate)
{
    if (hours <= overtime)
    return    hours * rate; 

    return  overtime * rate 
    +       (hours - overtime) * rate * overTimeFactor;

}

int main()
{


string lname; 
char jobCode;
int hours; 
double rate; 
double gross,  totalGross = 0.00;

// Input Phase 

cout << fixed << setprecision(2);
cout << " Please enter Last Name, Hours Worked, and Job Code for each employee, press ctrl + Z/D when finished" << endl;

cout<< " Last name, Job Code, Hours: ";
while (cin >> lname >> jobCode >> hours)
{

    rate = payRate(jobCode);
   
    if ( rate == 0.00)
    {
        cout << " Invalid Job code entered, Use 'L', 'A', or 'J' "<< endl;

    }

    else 
    {
        
        gross = grosspay(hours, rate);
        totalGross += gross;

        cout << "Last Name: "<< lname << endl;
        cout << "Gross Pay: " << gross << endl;

    }
        cout << " Summary " << endl;
        cout << "Total Gross pay: " << totalGross << endl;

        cout << " Last name, Job Code , Hours: ";

}







}
