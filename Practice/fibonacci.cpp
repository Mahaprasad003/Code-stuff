//Write a function to print the fibonacci series
#include<bits/stdc++.h>
using namespace std;

void fib()
{
int n,a=0;
int b=1;
int res =0;
cout<<"Enter the number: ";
cin>>n;
cout<<a<<'\t'<<b<<'\t';
for(int i=2;i<=n;i++)
{
	res = a+b;
	a=b;
	b = res;
	cout<<res<<'\t';
}
}
int main()
{
	fib();
}
