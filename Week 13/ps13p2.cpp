#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    double gpa;
};

bool loadStudents(const string& filename, vector<Student>& students)
{
    ifstream inputFile(filename);
    if (!inputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return false;
    }

    Student s;
    while (inputFile >> s.firstName >> s.lastName >> s.gpa)
    {
        students.push_back(s);
    }

    inputFile.close();
    return true;
}

void displayStudents(const vector<Student>& students)
{
    cout << left << setw(15) << "First Name" << setw(15) << "Last Name" << setw(5) << "GPA" << endl;
    cout << string(35, '-') << endl;

    for (const auto& s : students)
    {
        cout << left << setw(15) << s.firstName << setw(15) << s.lastName << setw(5) << fixed << setprecision(2) << s.gpa << endl;
    }
}

int main() 
{
    vector<Student> students;
    string filename = "student.txt";

    if (loadStudents(filename, students))
    {
        displayStudents(students);
    }
    else
    {
        cerr << "Failed to load students from file." << endl;
    }

    return 0;

}

