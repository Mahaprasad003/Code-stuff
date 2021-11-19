#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter first number(A): ";
    cin>>a;
    cout<<"Enter second number(B): ";
    cin>>b;
    cout<<"Enter third number(C): ";
    cin>>c;
    cout<<"Enter fourth number(D): ";
    cin>>d;

    if (a>b && b>c && c>d)
    {
        cout<<"A is the greatest number";
    }
    else if (b>c && c>d)
    {
        cout<<"B is the greatest number";
    }
    else{
        cout<<"D is the greatest number";
    }
    return 0;
}