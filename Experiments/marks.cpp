#include <iostream>

using namespace std;

int main()
{
    int roll, mark1, mark2, mark3, avg;
    string name;
    cout<<"What's your name: ";
    cin>>name;

    cout<<"What's your roll number: ";
    cin>>roll;
    
    cout<<"Enter marks in first subject: ";
    cin>>mark1;
    
    cout<<"Enter marks in second subject: ";
    cin>>mark2;
    
    cout<<"Enter marks in third subject: ";
    cin>>mark3;
    
    avg = (mark1 + mark2 + mark3) / 3;
    
    cout<<"The average marks in the three subjects are "<<avg;

    return 0;
}