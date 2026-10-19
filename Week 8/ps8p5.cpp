#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;


// Input 
double labFee(string dept, int code)                // Returns the lab fee for a given department and course code

// Process
{
   
    
    for (char &c : dept)                            // make department comparison case-insensitive
        c = toupper(static_cast<unsigned char>(c));
 
    if (dept == "CIS" && code == 101) return 50.00;
    if (dept == "CIS" && code == 121) return 100.00;
    if (dept == "MAT" && code == 111) return 25.00;
    if (dept == "MAT" && code == 112) return 35.00;
    if (dept == "ENG" && code == 100) return 55.00;
    return 50.00;                                   // all others

}


// Input 
int main() 
{
    string dept;
    int code;
    int count= 0;
    double fee, total= 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter department and course code, press Ctrl+Z/ Ctrl+D to end input: " << endl;

    cout << " Department and Course Code: ";
    while (cin >> dept >> code) 
    {
        fee = labFee(dept, code);
        
        total += fee;
        count++;
        
        
        cout << "Department: " << dept
             << "   Course Code: " << code
             << "   Lab Fee: $" << fee << endl;
    
        cout << " Department and Course Code: ";
    }

    // 

    if (count > 0) 
    {
       
        cout << "Number of courses:      " << count << endl;
        cout << "Total lab fees to collect: $" << total << endl;
        cout << "Average lab fee:        $" << total / count << endl;
        
    } 
    else 
    {
        cout << "No courses entered." << endl;
    }
 
    return 0;

}

