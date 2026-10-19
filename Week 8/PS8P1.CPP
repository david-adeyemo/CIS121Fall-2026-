#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;
 

double milesPerGallon(double miles, double gallons)             // Returns miles per gallon (0 if gallons is not positive)
{
    if (gallons <= 0)
        return 0.0;
    return miles / gallons;
}

int main()
{
    string city;
    double miles, gallons, mpg;
    double totalMiles = 0.0;
    int count = 0;

     cout << fixed << setprecision(2);
     cout << "Enter city, miles driven, and gallons used, press Ctrl+Z/ Ctrl+D to end input: " << endl;

     cout << " Destination city: ";
     while (getline(cin, city))
     {
        cout << "Miles travelled: ";
        if (!(cin >> miles))
            break;
 
        cout << "Gallons used: ";
        if (!(cin >> gallons))
            break;
 
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');      // clear the leftover newline so the next getline works
 
        if (gallons <= 0)
        {
            cout << "Gallons must be greater than 0. Trip not counted.\n\n";
        }
        else
        {
            mpg = milesPerGallon(miles, gallons);
            totalMiles += miles;
            count++;
 
            cout << "Destination: " << city << "\n";
            cout << "Miles per gallon: " << mpg << "\n\n";
        }
 
        cout << "Destination city: ";

     }

        cout << "Number of trips: " << count << endl;
        cout << "Total miles:     " << totalMiles << endl;

        return 0;
    }