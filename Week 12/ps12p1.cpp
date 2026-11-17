#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void readData ( string first[],string last[], double gpa[])
{
    ifstream infile("Studentdata.txt");
    for (int i=0; i<10; i++)
    {
        infile >> first[i] >> last[i] >> gpa[i];

    cout << first[i] << " " << last[i] << " " << gpa[i] << endl;
    }
    infile.close();
}

void displayArrays ( string first[],string last[], double gpa[])
{
    for (int i=0; i<10; i++)
    {
        cout << first[i] << " " << last[i] << " " << gpa[i] << endl;
    }
}

void reverseorder(string first[],string last[], double gpa[])
{
    for (int i=9; i>=0; i--)
    {
        cout << first[i] << " " << last[i] << " " << gpa[i] << endl;
    }
}

int main()
{
    string first[10];
    string last[10];
    double gpa[10];

    readData(first,last,gpa);
    cout <<"In order: " <<endl;
    cout << endl;
   

    displayArrays(first,last,gpa);
    cout <<"In reverse order: " <<endl;
    cout << endl;
    reverseorder(first,last,gpa);

    return 0;
}
