#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int pay_period = 26; // Number of pay periods in a year

double calcBiweekly(double annualSalary) 
{
    return annualSalary / pay_period; // Calculate bi-weekly pay
}

int main() 
{

     ifstream inFile("emply.txt");
     if (!inFile)
     {
        cout << "Error file was not found" << endl;
        return 1;
     }

    string lname;
    double annualSalary;
    double SalarySum = 0.0;
    int count = 0;

    cout << fixed << setprecision(2) << endl; // Makes all output to 2 decimal places
    cout << left << setw(15) << "Last Name" << setw(20) 
    << "Annual Salary" << right << setw(20) 
    << "Bi-Weekly Pay" << endl; // Sets up the column headers

    while (inFile >> lname >> annualSalary)
    {
 
        double biweeklyPay = calcBiweekly(annualSalary);

        SalarySum += annualSalary;
        count++;

        cout << left << setw(15) << lname << setw(20) << annualSalary
        << right << setw(20) << biweeklyPay << endl; // Output the employee information in a table format

    }
    inFile.close(); // Close the input file

    double averageSalary = (count > 0) ? (SalarySum / count) : 0.0; // Calculate average salary, avoid division by zero

    cout << endl;
    cout << "Total Employees: " << count << endl;
    cout << "Total Salary Sum: $" << SalarySum << endl;
    cout << "Average Salary: $" << averageSalary << endl; // Output the average salary
    
    return 0;


}

