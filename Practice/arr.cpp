#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int num[a];
    
    for (int i = 0; i < a; i++)
    {
        cin>>num[i];
    }

    for (int k = a-1; k >=0; k--)
    {
        cout<<num[k]<<" ";
    }
    
    return 0;
}