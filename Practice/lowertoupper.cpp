#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[20],b[20];
    int l=0;
    cin>>a;
    for(int i=0;a[i]!= '\0'; i++)
    {
        l++;
    }
    b[l] = '\0';
    for(int i=0;i<l;i++)
    {
        b[i] = tolower(a[i]);
    }
    cout<<b;
}