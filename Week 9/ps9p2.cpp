#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double batting_average(int hits, int atBats)
{
    if (atBats <= 0)
        return 0.0;
    return static_cast<double>(hits) / atBats;          // Answer in decimal form
}

int main() 
{

    string lname;
    int hits, atBats;
    double average;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "enter player last name, number of hits, and at bats, enter ctrl + Z/D when done" << endl;

    cout << " Last name, Number of hits, At bats:  ";
    
    while ( cin >> lname >> hits >> atBats)
    {
        if (atBats <= 0.00)
             cout << " At bats must be greater than 0" << endl;
    
        else 
        {
            average = batting_average(hits , atBats);
            count++;

            cout << " Last Name: "<< lname << endl;
            cout << " Batting average: " << average << endl;
        }

        cout << "Last Name, Number of hits, At bats: " << endl;

    }

    cout << "\n\n";
    cout << "Number of players entered: " << count << "\n";
 
    return 0;
}
