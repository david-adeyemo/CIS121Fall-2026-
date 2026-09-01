#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;
    float result;

    cout << "Enter the first integer: ";
    cin >> n1;

    cout << "Enter the second integer: ";
    cin >> n2;

    cout << "Enter the third integer: ";
    cin >> n3;

    result = (n1 + n2) * n3;

    cout << "The result is: " << result << endl;

    return 0;
}