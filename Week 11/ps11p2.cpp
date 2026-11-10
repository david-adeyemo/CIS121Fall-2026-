#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std; 

const double tax_rate = 0.07;

double calcExt(int qty, double price)
{
    return qty * price;
}

int main() 
{

     ifstream inFile("grocery.txt");
        if (!inFile)
        {
            cout << "Error file was not found" << endl;
            return 1;
        }
    
    string item;
    int qty;
    double price;
    double sumExtPrice = 0.0;

    cout << fixed << setprecision(2) << endl; // Makes all output to 2 decimal places
    
    cout << left << setw(20) << "Item"
    << right << setw(10) << "Quantity"
    << setw(10) << "Cost per Item"
    << setw(10) << "Extended Price" << endl;

    while (inFile >> item >> qty >> price)
    {
        double extPrice = calcExt(qty, price);
        sumExtPrice += extPrice;

        cout << left << setw(20) << item
        << right << setw(10) << qty
        << setw(10) << price
        << setw(10) << extPrice << endl;
    }
    inFile.close();

    double tax_amnt = sumExtPrice * tax_rate;
    
    double total = sumExtPrice + tax_amnt;

    cout << endl; 
    cout << "Sum of extended Prices: " << sumExtPrice << endl;  
    cout << "Tax Amount: " << tax_amnt << endl;
    cout << "Total Receipt: " << total << endl;


return 0;

}