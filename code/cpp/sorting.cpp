#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    string s; cin>>s;
    sort(s.begin(), s.end());
    cout<<s;


    for(int i=0;i<n;i++)
    {
         // arr[i] = s[i];
         for(int j=0;j<n-1;j++)
         {
              if(s[j]>s[j+1])
              {
                   char temp = s[j];
                   s[j] = s[j+1];
                   s[j+1] = temp;
              }
         }
    }
    // sort(s,);
    // for(int i=0;i<n;i++)
    // {
    //      cout<<arr[i];
    // }
    // cout<<s;

}
