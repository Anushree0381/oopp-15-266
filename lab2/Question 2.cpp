#include<iostream>
using namespace std;
class Salary{
    public:
    float salary;
    void calculate(){
        float *newSalary=&salary;
        *newSalary=*newSalary+(*newSalary*10/100);
    }
};
int main(){
    Salary s;
    s.salary=50000;
    s.calculate();
    cout<<"Salary="<<s.salary<<endl;
    return 0;
}