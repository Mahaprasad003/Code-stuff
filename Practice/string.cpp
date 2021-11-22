#include<iostream>

using namespace std;

int main()
{
    string k,l;
    char x,y;
    cin>>k;
    cin>>l;

    int lenk = k.size();
    int lenl = l.size();
    cout<<lenk<<" "<<lenl<<endl;

    cout<<k+l<<endl;

    x = l[0];
    y = k[0];

    k[0] = x;
    l[0] = y;

    cout<<k<<" "<<l;

    return 0;

}