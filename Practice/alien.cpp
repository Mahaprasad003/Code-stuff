#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5],sum=0,tkt=100;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		if(arr[i]>3)
		{
			sum = sum+100;
		}
		else{
			sum +=0;
		}
	}
	cout<<sum;

}
