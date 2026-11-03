#include <iostream>
#include <iomanip>
using namespace std;
 


// pass by reference parameters: postage, areaCharge, weightCharge
void calcPostage(double weight, int zipCode,
double &postage, double &areaCharge, double &weightCharge)
{
    double chargePerOunce;
 
    // Area table
    if (zipCode == 60171)
        areaCharge = 2.00;
    else if (zipCode == 60172)
        areaCharge = 2.50;
    else if (zipCode == 60635)
        areaCharge = 3.00;
    else
        areaCharge = 5.00;
 
    
    if (weight > 100)
        chargePerOunce = 0.02;
    else if (weight > 50)
        chargePerOunce = 0.03;
    else
        chargePerOunce = 0.05;
 
    weightCharge = weight * chargePerOunce;
    postage = areaCharge + weightCharge;
}


int main()
{
    double weight;
    int zipCode;
    double postage, areaCharge, weightCharge;
    int count = 0;
 
    cout << fixed << setprecision(2);
    cout << "Enter package weight (in oz) and zip code (ctrl + D to quit): ";

    while (cin >> weight >> zipCode)
    {
        calcPostage(weight, zipCode, postage, areaCharge, weightCharge);
 
         cout << "Area Charge:   $" << areaCharge
             << "Weight Charge: $" << weightCharge
             << "Postage:       $" << postage << endl;
 
        count++;
 
        cout << "Enter package weight (in oz) and zip code (ctrl + D to quit): ";
    }

    cout << "Total packages processed: " << count << endl;

    return 0;
}
 