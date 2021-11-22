#include <iostream>

using namespace std;

int main()
{
    int num, a,b,c,d,sum;
    cout<<"Enter the three digit number: ";
    cin>>num;
    
    a = num/100;
    cout<<a<<endl;
    
    b = num%10;
    cout<<b<<endl;
    
    c = num%100;
    d = c/10;
    
    cout<<d<<endl;
    
    sum = a+b+d;
    cout<<sum;
}
