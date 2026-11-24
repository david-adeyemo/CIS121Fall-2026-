#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int SIZE = 10;

struct Car
{
    string make;
    string model;
    double msrp;
};

int loadCars(const string& filename, Car cars[], int size)
{
    ifstream inFile(filename);
    if (!inFile)
        return -1;

    int count = 0;
    while (count < size && inFile >> cars[count].make
                                  >> cars[count].model
                                  >> cars[count].msrp)
    {
        count++;
    }

    inFile.close();
    return count;
}

void displayCars(const Car cars[], int count)
{
    cout << left << setw(15) << "Make"
         << setw(15) << "Model"
         << "MSRP" << endl;
    cout << string(40, '-') << endl;

    for (int i = 0; i < count; i++)
    {
        cout << left << setw(15) << cars[i].make
             << setw(15) << cars[i].model
             << "$" << fixed << setprecision(2) << cars[i].msrp << endl;
    }
}


int main()
{
    Car cars[SIZE];

    int count = loadCars("cars.txt", cars, SIZE);
    if (count < 0)
    {
        cerr << "Error: could not open cars.txt" << endl;
        return 1;
    }

    displayCars(cars, count);
    return 0;

}