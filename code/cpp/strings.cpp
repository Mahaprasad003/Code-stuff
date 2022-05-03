#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
     string s,t; cin>>s>>t;
     int lens = s.length();
     int lent = t.length();
     if(lens>lent){
          n = lens;
     }
     else{
          n = lent;
     }

     for(int i=0;i<n;i++)
     {
          if(i<lens)
          {
               cout<<s[i];
          }
          if(i<lent)
          {
               cout<<t[i];
          }
     }
     cout<<endl;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

}
