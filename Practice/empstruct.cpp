//employee id,name,basic salary. if basic>10000,da=50%,ta=25%.else da=40%,ta=20%.find net salary=basic+da+ta
#include <iostream>
using namespace std;
struct employee{
	int eid;
	string name;
	float bs;
}e;

int main()
{
	int n,i;
	cout<<"Enter the number of employees"<<'\n';
	cin>>n;
	struct employee a[100];
	cout<<"Enter the Employee Details"<<'\n';
	cout<<'\n';
	for(i=1;i<=n;i++)
	{
		cout<<"Employee "<<i<<":"<<'\n';
		cout<<"Enter Employee ID: ";
		cin>>a[i].eid;
		cout<<"Enter Employee Name: ";
		cin>>a[i].name;
		cout<<"Enter the Basic Salary: ";
		cin>>a[i].bs;
		cout<<'\n';
	}
	float ta,da,gs;
	cout<<"EMPLOYEE SALARIES: "<<'\n';
	cout<<'\n';
	for(i=1;i<=n;i++)
	{
		if(a[i].bs>10000)
		{
			ta=0.25*a[i].bs;
			da=0.5*a[i].bs;
		}
		else
		{
			ta=0.2*a[i].bs;
			da=0.4*a[i].bs;
		}
		gs=a[i].bs+ta+da;
		cout<<"Emp ID"<<'\t'<<"Name"<<'\t'<<"BS"<<'\t'<<"DA"<<'\t'<<"TA"<<'\t'<<"GS"<<'\n';
		cout<<a[i].eid<<'\t'<<a[i].name<<'\t'<<a[i].bs<<'\t'<<da<<'\t'<<ta<<'\t'<<gs<<'\n';
	}
}

