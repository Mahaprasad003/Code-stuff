#include<iostream>
using namespace std;

int main()
{
    int num1, num2,choice;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter a choice: ";
    cin>>choice;


    switch (choice)
    {
    case 1:
        cout<<"Sum of numebers is ";
        cout<<num1 + num2;
        break;
    case 2:
        cout<<"Multiplication of numbers is ";
        cout<<num1 * num2;
        break;
    case 3:
        cout<<"Division of two numbers is ";
        cout<<num1 / num2;
        break;
    case 4:
        cout<<"Difference of two numbers is ";
        cout<<num1 - num2;
        break;
    default:
        cout<<"Invalid choice";
    }
}