#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;

public:
    void input()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name   : " << name << endl;
        cout << "Roll   : " << roll << endl;
        cout << "Branch : " << branch << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}