#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char a[20],b[20];
	cout<<"Enter a string"<<'\n';
	cin>>a;
	int l=strlen(a);
	b[l]='\0';
	for(int i=0;i<l;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			b[i]=a[i]+32;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			b[i]=a[i]-32;
		}
	}
	cout<<b;
}