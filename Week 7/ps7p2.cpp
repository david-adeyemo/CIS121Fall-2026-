#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    string lName;
    int hits;
    int at_Bats;
    double batting_average;
    int nPlayer = 0;

      cout << fixed << setprecision(3);
    cout << "Enter last name, number of hits, and at bats for each player. Press Ctrl+Z then Enter to stop";
    cin >> lName >> hits >> at_Bats;

  
 
    // Priming read
    cout << "Last name: ";
    cin >> lName;

     while (!cin.eof())
    {
        cout << "Hits: ";
        cin >> hits;
 
        cout << "At bats: ";
        cin >> at_Bats;
 
       
        if (at_Bats > 0)
            batting_average = static_cast<double>(hits) / at_Bats;  // Cast to double so the division keeps the decimal part
        else
            batting_average = 0.0;
 
        cout << "Last name: " << lName << " batting average: " << batting_average << endl;
 
        nPlayer++;          // Display the number of players processed
 
        // Read the next player
        cout << "Last name: ";
        cin >> lName;
    }

      cout << "  Summary of players processed: "<< endl;
    cout << "Number of players entered: " << nPlayer << endl;
 

}