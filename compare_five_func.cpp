#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int max_five(int a, int b, int c, int d, int e)
{
    int answer = std::max({a,b,c,d,e});
    return answer;
}

int main()
{
   int a,b,c,d,e;
   cout<<"Enter five numbers: ";
   cin>>a>>b>>c>>d>>e;
   cout<<"The max of the given five numbers is: ";
   cout<<max_five(a,b,c,d,e);

   return 0;
   
}
