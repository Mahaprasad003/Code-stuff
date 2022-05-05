// How to return an array.
#include<bits/stdc++.h>
using namespace std;

int * fun(int n)
{
     int *p;
     p = (int *) malloc(n*sizeof(int));
     return (p);
}

int main()
{
     int n; cin>>n;
     int *arr;
     arr = fun(5);
     arr[0] = 1;
     cout<<arr[0];

}
