#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void computeAmounts (double amount, double rate5, double rate10,
                    double &fiveYearAmt, double &tenYearAmt)

{
    fiveYearAmt = amount * pow(1 + rate5, 5);
    tenYearAmt = amount * pow(1 + rate10, 10);
}

int main ()
{

double amount, rate5, rate10;
double fiveYearAmt, tenYearAmt; 
int count= 0;

cout << fixed << setprecision(2);

cout << " Enter Investment Amount, 5 Year Rate, 10 Year Rate: ";
cout << " Place rates in decimal form (e.g. 0.05 for 5%): ";


while (cin >> amount >> rate5 >> rate10)
{
    computeAmounts(amount, rate5, rate10, fiveYearAmt, tenYearAmt);

    cout << " Amount Invested: $" << amount << endl;
    cout << " Amount in 5 Years: $" << fiveYearAmt << endl;
    cout << " Amount in 10 Years: $" << tenYearAmt << endl;
    count++;


cout << " Enter Investment Amount, 5 Year Rate, 10 Year Rate: ";
cout << " Place rates in decimal form (e.g. 0.05 for 5%): ";
  
}

cout << "You entered " << count << " sets of data." << endl;

return 0;

}