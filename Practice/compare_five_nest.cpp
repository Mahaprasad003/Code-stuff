#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;

    cout<<"Enter five integers: ";
    cin>>a>>b>>c>>d>>e;

   if (a>b && b>c && c>d && d>e)
   {
       cout<<a<<" is greatest";
   }
   else if (b>c && c>d && d>e)
   {
       cout<<b<<" is greatest";
   }
   else if (c>d && d>e)
   {
       cout<<c<<" is the greatest";
   }
   else
   {
       cout<<d<<" is the greatest";
   }
    

}