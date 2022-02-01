#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		double bs,hra,da,gs;
		cin>>bs;
		if(bs<1500)
		{
			hra = 0.1*bs;
			da = 0.9*bs;
			gs = bs+hra+da;
			cout<<fixed<<setprecision(2)<<gs<<endl;
		}
		else{
			hra = 500;
			da = 0.98*bs;
			gs = bs+hra+da;
			cout<<fixed<<setprecision(2)<<gs<<endl;
		}
	}

}
