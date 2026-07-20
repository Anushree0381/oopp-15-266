#include<iostream>
using namespace std;
void input(string &name,string &branch,string &section,int &roll,int marks[]){
    cout<<"Enter name of student: ";
    cin>>name;
    cout<<"Enter branch of student: ";
    cin>>branch;
    cout<<"Enter section of student: ";
    cin>>section;
    cout<<"Enter roll number of student: ";
    cin>>roll;
    cout<<"Enter marks of 5 subjects: ";
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
}
void findSum(int marks[], int &sum, float &percent){
    sum = 0;
    for(int i=0;i<5;i++){
        sum += marks[i];
    }
    percent = (float)sum/5;
}
void show(string name, string branch, string section, int roll, int marks[], int sum, float percent){
    cout<<"Name: "<<name<<endl;
    cout<<"Branch: "<<branch<<endl;
    cout<<"Section: "<<section<<endl;
    cout<<"Roll Number: "<<roll<<endl;
    cout<<"Marks: ";
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    cout<<"Total Marks: "<<sum<<endl;
    cout<<"Percentage: "<<percent<<endl;
}
int main(){
    string name, branch,section;
    int roll , marks[5];
    int sum;
    float percent;
    input(name,branch,section,roll,marks);
    findSum(marks,sum,percent);
    show(name,branch,section,roll,marks,sum,percent);
    return 0;
}