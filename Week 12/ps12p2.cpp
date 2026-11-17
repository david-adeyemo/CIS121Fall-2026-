#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void readData(string city[], int pop[])
{
    ifstream infile("Citydata.txt");

    for (int i = 0; i < 8; i++)
    {
        infile >> city[i] >> pop[i];
    }
    infile.close();
}

void displayArrays(string city[], int pop[])
{
    for (int i = 0; i < 8; i++)
    {
        cout << city[i] << " " << pop[i] << endl;
    }
}

int searchCity(string city[], string name)
{
    for (int i = 0; i < 8; i++)
    {
        if (city[i] == name)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string city[8];
    int pop[8];
    string name;
    int spot;

    readData(city, pop);
    displayArrays(city, pop);

    cout << "Enter city name, ctl+z to stop: ";
    while (cin >> name)
    {
        spot = searchCity(city, name);

        if (spot == -1)
        {
            cout << name << " not found" << endl;
        }
        else
        {
            cout << city[spot] << " has a population of " << pop[spot] << endl;
        }

        cout << "Enter city name, ctl+z to stop: ";
    }

    cout << "No further results" << endl;

    return 0;


}
