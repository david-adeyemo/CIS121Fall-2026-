#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    // Declare Variables 
 
    char letter; 
    string stlname; 
    float score; 

    // Input Phase 

    cout << " Enter student last name and score";
    cin >> stlname >> score;

    // Process Phase 

    if ( score > 90) 
    {
         letter ='A';  
    }
else if ( score >= 80) 
    { 
        letter = 'B'; 
    } 
else if ( score >= 70) 
    {
         letter = 'C'; 
    }
else if ( letter >= 60)   
  {
         letter = 'D'; 
  } 
else  
   { 
    
    letter = 'F'; 
   } 

   cout << fixed << setprecision(2);
   cout << " Student Last Name :" << stlname << endl;
   cout << "Score: " << score << endl;
   cout << "Letter Grade: " << letter << endl;

   return 0;

}