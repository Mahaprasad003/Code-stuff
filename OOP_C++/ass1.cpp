/*
Design the class student containing get data and display data as two of it's methods which will be used for reading
and displaying the student info respectively, where the get data method will be private.
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
    void displayData()
    {
        cout<<"Student's name: "<<name<<endl;
        cout<<"Student's age: "<<age<<endl;
        cout<<"Student's roll: "<<rollnumber<<endl;
    }
};

int main()
{
    Student stud;

    stud.displayData();

    return 0;
}

