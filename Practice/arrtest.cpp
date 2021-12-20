#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    for(int a=0;a<10;a++)
    {
        int x; cin>>x;
        arr[a] = x;
    }
    
    for(int b = 9; b >= 0; b--)
    {
        cout<<arr[b]<<endl;
    }
}