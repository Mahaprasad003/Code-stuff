/*
WAP to demonstrate function defintion outside the class and accessing the class members in the function definition
*/
#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    string rollnumber;

    void getData()
    {
        cout<<"Enter student's name: ";
        cin>>name;

        cout<<"Enter age: ";
        cin>>age;

        cout<<"Enter roll number: ";
        cin>>rollnumber;
    }
public:

    Student()
    {
        getData();
    }
    
    void displayData();
};

void Student::displayData()
    {
        cout<<"Student's name: "<<name<<endl;
        cout<<"Student's age: "<<age<<endl;
        cout<<"Student's roll: "<<rollnumber<<endl;
    }

int main()
{
    Student stud;

    stud.displayData();

    return 0;
}