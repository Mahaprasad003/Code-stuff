#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,avg;

    cout<<"Enter your marks in the first subject: ";
    cin>>a;
    cout<<"Enter your marks in the second subject:  ";
    cin>>b;
    cout<<"Enter your marks in the third subject: ";
    cin>>c;
    cout<<"Enter your marks in the fourth subject: ";
    cin>>d;
    cout<<"Enter your marks in the fifth subject: ";
    cin>>e;

    avg = (a+b+c+d+e)/5;

    if (avg>60)
    {
        cout<<"You have secured first division";
    }
    else if (avg>50 && avg<60)
    {
        cout<<"You have secured second division";
    }
    else if (avg > 40 && avg < 50)
    {
        cout<<"You have secured third division";
    }
    else
    {
        cout<<"You have Failed";
    }
    
    return 0;
    
}