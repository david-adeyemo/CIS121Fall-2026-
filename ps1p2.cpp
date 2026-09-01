#include <iostream>
using namespace std;
int main()
{
      // define variables  
      float num1, num2;
      float sum;
      
      // input phase 
      cout << "Enter the first number: ";
      cin >> num1;

      cout << "Enter the second number: ";
      cin >> num2;

      // process phase
  
      sum = num1 + num2;

      cout << "The sum is: " << sum << endl;
      cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

      return 0;
}    