#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int a;
    // cin>>a;
    int num[5];

    for (int i = 0; i < 5; i++)
    {
        cin>>num[i];
    }

    for (int i=4; i>=0; i--)
    {
        cout<<num[i]<<" ";
    }

    return 0;
}
