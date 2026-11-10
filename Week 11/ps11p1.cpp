#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const double tax_rate = 0.07;

void calcSavings(double msrp, double saleprice, double &savings, double &salesTax)
{
    savings = msrp - saleprice;
    salesTax = saleprice * tax_rate;
}

int main()
{
    ifstream inFile("auto.txt");
    if (!inFile)
    {
        cout << "Error file was not found" << endl;
        return 1;
    }
    string car, model;
    double msrp, salesPrice, savings, salesTax;
    double sumSavings = 0.0;
    double sumSalesTax = 0.0;

    cout << fixed << setprecision(2) << endl; // Makes all output to 2 decimal places
    cout << left << setw(10) << "Make"
         << setw(25) << "Model"
         << setw(10) << "MSRP"
         << right << setw(10) << "Sale Price"
         << setw(10) << "Savings"
         << setw(10) << "Sales Tax" << endl;
    
    while (inFile >> car >> model >> msrp >> salesPrice)
    {
        calcSavings(msrp, salesPrice, savings, salesTax);
       
        sumSavings += savings;
        sumSalesTax += salesTax;
        
        
        cout << left << setw(10) << car
             << setw(25) << model
             << right << setw(10) << msrp
             << setw(10) << salesPrice
             << setw(10) << savings
             << setw(10) << salesTax << endl;
    
    }
    inFile.close();

   double total_savings = sumSavings - sumSalesTax;
    cout << endl;
    cout << "Total Savings: " << total_savings << endl;

    return 0;

    


  
}