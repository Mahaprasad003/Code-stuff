#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,c=0,r;
    cout<<"Enter a number: ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
        
    }
    if (c == 2)
    {
        cout<<"The number entered is prime";
    }
    

}