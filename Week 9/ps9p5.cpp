#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;

double costPerCredit(char district)
{
    switch (toupper(static_cast<unsigned char>(district)))
    {
    case 'I': return 250.00;
    case 'O': return 550.00;  
    default: return 0.00;
       
    }
}

double computeTuition(int credits , char district)
{
    return credits * costPerCredit(district);
}

int main()
{

string lname; 
int credits;
char district;
double tuition;
double total_tuition = 0.00;
int count = 0.00;

cout << " Please enter Student last name, credit hours, district code, enter Ctrl + Z/D when finished ";

cout << "Student Last name: , Credit Hours: , District Code";

while (cin>>lname>>credits>>district)
{


    if ( costPerCredit(district)==0)
    {
        cout << " Invalid Entry, please enter I or O "<< endl;
    }
    else 
    {
        tuition = computeTuition(credits, district);
        total_tuition += tuition; 
        count++;

        cout << fixed << setprecision(2);
        cout<< " Student Last Name: "<< lname << endl;
        cout << " Tuition Cost: " << tuition << endl;

    }

    cout << "Student Last name: ";
    cout << " Credit Hours: ";
    cout << "District Code ";

}
    cout << fixed << setprecision(2);
    cout<< " Summary " << endl;
    cout << "Sum of Tuition Cost: " << total_tuition<< endl;
    cout <<"Number of Students entered: " << count<< endl; 

    return 0;





}
