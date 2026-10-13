#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Input Phase
    string city;
    double miles, gallons, mpg;
    double total_miles = 0.0;
    int tripcount = 0;

    cout << fixed << setprecision(2); 
    cout << "Enter city, gallons used, and miles driven for each trip. Press Ctrl+Z then Enter to stop.";


    // Processing Phase     

    // Priming read
    cout << "Destination:";
    getline (cin, city);    // Allow for city names with spaces
    
    while (cin)     // remove chance of bad entry      
    {
        cout << "Gallons used: ";
        cin >> gallons;

        cout << "Miles driven: ";
        cin >> miles;
        cin.ignore(100, '\n');      // Ignore the newline character after reading miles

        if (gallons > 0) {
            mpg = miles / gallons; // Calculate miles per gallon
        } else {
            mpg = 0.0;
        }

        total_miles += miles;  // Accumulate total miles
        tripcount++;           // Increment trip count

        cout << "Destination: " << city << ", Miles per gallon: " << mpg << endl;

        // Read the next trip
        cout << "Destination: ";
        getline(cin, city);

      
    }
        cout << " Summary of trips processed: " << endl;
        cout << " Sum of miles driven: " << total_miles << endl;
        cout << " Number of trips entered: " << tripcount << endl;

        return 0;


}