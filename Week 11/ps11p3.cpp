#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double calcmpg(double miles, double gallons) 
{
    return miles / gallons; // Calculate miles per gallon
}

int main() 
{
     ifstream inFile("trips.txt");
        if (!inFile)
        {
            cout << "Error file was not found" << endl;
            return 1;
        }

    double miles, gallons;
    double total_miles = 0.0;
    double total_gallons = 0.0;

    cout << fixed << setprecision(2) << endl; // Makes all output to 2 decimal places
    cout << right << setw(10) << "Gallons" 
    << setw(10) << "Miles" 
    << setw(10) << "MPG" << endl; // Sets up the column headers

    while (inFile >> gallons >> miles)
    {
        double mpg = calcmpg(miles,gallons);

        total_miles += miles;
        total_gallons += gallons;

        cout  << setw(10) << gallons 
        << setw(10) << miles
        << setw(10) << mpg << endl; // Output the trip information in a table format
    }
    inFile.close();

    cout << endl;
    cout << "Total Miles: " << total_miles << endl;
    cout << "Total Gallons: " << total_gallons << endl;

    return 0;
}