#include <iostream>
using namespace std;

void updateSalary(double &salary)
{
    salary = salary + (salary * 10 / 100);
}

int main()
{
    double salary = 50000;
    double &newSalary = salary;

    updateSalary(newSalary);

    cout << "Updated Salary = " << salary << endl;

    return 0;
}