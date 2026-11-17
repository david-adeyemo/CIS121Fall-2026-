#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayArrays(string first[], string last[], double salary[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << first[i] << " " << last[i] << " " << salary[i] << endl;
    }
}

int searchLastName(string last[], string name)
{
    for (int i = 0; i < 10; i++)
    {
        if (last[i] == name)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string first[10];
    string last[10];
    double salary[10];
    string name;
    int spot;

    ifstream infile("Empldata.txt");

    for (int i = 0; i < 10; i++)
    {
        infile >> first[i] >> last[i] >> salary[i];
    }
    infile.close();

    displayArrays(first, last, salary);

    cout << "Enter a last name (or quit to stop): ";
    cin >> name;

    while (name != "quit")
    {
        spot = searchLastName(last, name);

        if (spot == -1)
        {
            cout << name << " not found" << endl;
        }
        else
        {
            cout << first[spot] << " " << last[spot] << " " << salary[spot] << endl;
        }

        cout << "Enter a last name (or quit to stop): ";
        cin >> name;
    }

    return 0;
}

