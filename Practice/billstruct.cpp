//sl no. name. price. quantity. calculate total amt. if total>500, discount=5%,else 2%. display net amount to be paid
#include<iostream>
using namespace std;
struct bill{
	int sl;
	string item;
	float mrp;
	int quan;
	float price;
	float total;
}s;

int main()
{
	int n,i;
	cout<<"Enter the number of items"<<'\n';
	cin>>n;
	struct bill a[100];
	cout<<"ENTER THE ITEM DETAILS"<<'\n';
	cout<<'\n';
	for(i=1;i<=n;i++)
	{
		cout<<"ITEM "<<i<<":"<<'\n';
		cout<<"Enter the serial number: ";
		cin>>a[i].sl;
		cout<<"Enter item name: ";
		cin>>a[i].item;
		cout<<"Enter MRP: ";
		cin>>a[i].mrp;
		cout<<"Enter the Quantity: ";
		cin>>a[i].quan;
		cout<<'\n';
	}
	cout<<"BILL:";
	cout<<'\n';
	cout<<'\n';
	float total=0;
	cout<<"Sl No."<<'\t'<<"Item"<<'\t'<<"MRP"<<'\t'<<"Quantity"<<'\t'<<"Price"<<'\n';
	for(i=1;i<=n;i++)
	{
		a[i].price=a[i].mrp*a[i].quan;
		cout<<a[i].sl<<'\t'<<a[i].item<<'\t'<<a[i].mrp<<'\t'<<a[i].quan<<'\t'<<'\t'<<a[i].price<<'\n';
		cout<<'\n';
		total=total+a[i].price;
	}
	cout<<"The total price is Rs."<<total<<'\n';
	cout<<'\n';
	float disc,net;
	if(total>500)
	{
		disc=0.05*total;
	}
	else
	{
		disc=0.02*total;
	}
	net=total-disc;
	cout<<"The amount to be paid is Rs."<<net;
	
}
	
