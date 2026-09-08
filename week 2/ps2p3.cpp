#include <iostream>
using namespace std;
int main()
{ 


    // Define Variables 
    float length, width, area, perimeter;    

    // Input Phase 
    cout << "Enter the length:";
    cin >> length;
    cout << "Enter the width:";
    cin >> width;

    // Process Phase
    area = length * width;
    perimeter = 2 * (length + width);

    // Output Phase
    cout << "Area is: " << area << endl;
    cout << "Perimeter is: " << perimeter << endl;

    return 0;
} 