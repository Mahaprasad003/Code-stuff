#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    cout<<"Enter third number: "<<endl;
    cin>>c;

    if (a>b)
    {
        if(b>c)
        {
            cout<<"a is greatest";
        }
        else
        {
            cout<<"c is greatest";
        }
    }
    else
    {
        if (b>c)
        {
            cout<<"b is greatest";
        }
        else{
            cout<<"c is largest";
        }
    }
    return 0;
    
}