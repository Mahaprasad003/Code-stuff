#include<iostream>
using namespace std;


struct Student
{
    string name;
    int roll;
    string dept;
};

void displayData(Student s);

int main()
{
    Student s;
    cout<<"Enter name of student: ";
    cin>>s.name;

    cout<<"Enter roll number: ";
    cin>>s.roll;

    cout<<"Enter department: ";
    cin>>s.dept;
    cout<<endl;

    displayData(s);
}

void displayData(Student s)
{
    cout<<"Name of the student: "<<s.name<<endl;
    cout<<"Roll number of student: "<<s.roll<<endl;
    cout<<"Department of student: "<<s.dept<<endl;
}