#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;
 
const double IN_DISTRICT_RATE  = 250.00;
const double OUT_DISTRICT_RATE = 500.00;
const double FEE_PERCENT       = 0.10;

void calcTuition (char studentCode, double credits, double &tuitionOwed, double &courseFees)
{ 


    
        double costPerCredit = (toupper(studentCode) == 'I')       // Simpler If/Else statement using the ternary operator
                    ? IN_DISTRICT_RATE
                    : OUT_DISTRICT_RATE;
    

    tuitionOwed = credits * costPerCredit;
    courseFees = tuitionOwed * FEE_PERCENT;

}

int main() 
{
 
 ifstream inFile("student.txt");
  if (!inFile)
  {
        cout << " Error file could not be opened." << endl;
        return 1;

  }

  string lastName;
  char studentCode;
  double credits, tuitionOwed, courseFees;
  double tuitionSum = 0.0;
  int count = 0;

  cout<< fixed << setprecision(2) << endl;                          // Makes all output to 2 decimal places
  cout<< left << setw(15) << "Last Name" << setw(10) << "Code"      // Sets up the column headers
  << right <<setw(14) << "Cost/Credits" << setw(10) << "Credits" 
  << setw(14) << "Tuition Owed" << setw(14) << "Course Fees" << endl; \

  while (inFile >> lastName >> studentCode >> credits) 
  {
        calcTuition(studentCode, credits, tuitionOwed, courseFees);
      
        double costPerCredit = tuitionOwed/credits; // Calculate cost per credit based on tuition owed and credits
       
        tuitionSum += tuitionOwed;
        count++;
        
        
        
        cout << left << setw(15) << lastName << setw(10) << studentCode
        << right << setw(14) << costPerCredit
        << setw(10) << credits << setw(14) << tuitionOwed
        << setw(14) << courseFees << endl;
        
 }
 inFile.close();

 double averageTuition = (count > 0) ? (tuitionSum / count) : 0.0; // Calculate average tuition owed


 cout << endl;
 cout << "Total tuition Sum: $" << tuitionSum << endl;
 cout << "Number of students: " << count << endl;
 cout << "Average tuition owed: $" << averageTuition << endl; 


return 0;

}

