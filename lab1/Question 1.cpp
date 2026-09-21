#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    cout << "\n--- Student 1 Details ---\n";
    s1.display();

    cout << "\n--- Student 2 Details ---\n";
    s2.display();

    return 0;
}