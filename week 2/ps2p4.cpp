#include <iostream>
using namespace std;
int main()
{
    // Define variables
    float credt, labf, tuition;
    string lname;

    // Input Phase
    cout << "Enter the last name:";
    cin >> lname;

    cout << "Enter the credit hours:";
    cin >> credt;

    cout << "Enter the lab fee:";
    cin >> labf;

    // Process Phase
    tuition = (credt * 250) + labf;
    cout << " "<< lname << " and " << " " << tuition << endl;

    return 0; 
}