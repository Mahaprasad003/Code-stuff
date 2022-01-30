#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin>>arr[i][j];
		}
	}

	int k=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i<=j)
			{
				cout<<arr[i][j]<<'\t';
			}
			else
			{
				cout<<" "<<'\t';
			}
		}
		cout<<'\n';
	}

}
