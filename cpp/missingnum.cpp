#include<bits/stdc++.h>
using namespace std;

void solve ()
{
	long long n;
	cin>>n;

	long long arr[n-1];
	for(int i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}
	if(n==2 && arr[0]==1){
		cout<<2;
		return;
	}
	sort(arr,arr+(n-1));
	for(int i=0;i<n-1;i++)
	{
		if(i+1!=arr[i])
		{
			cout<<i+1;
			return;
		}
		else{
			continue;
		}

	}
	cout<<n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
