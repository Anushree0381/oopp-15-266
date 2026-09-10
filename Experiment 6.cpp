#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    // Default constructor
    Student()
    {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized constructor
    Student(int i, string n)
    {
        id = i;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy constructor
    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "ID: " << id << " Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    cout << "Creating Object s1" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating Object s2" << endl;
    Student s2(101, "Anu");
    s2.display();

    cout << "\nCreating Object s3" << endl;
    Student s3 = s2;
    s3.display();

    cout << "\nEnd of Program" << endl;

    return 0;
}