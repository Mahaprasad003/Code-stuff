#include<bits/stdc++.h>
using namespace std;

void dec_to_binary() {
	int n,a[32],cnt=0;
	cout<<"Enter the decimal number you want to  convert: ";
	cin>>n;

	for(int i=0;n>0;i++)
	{
		a[i] = n%2;
		n=n/2;
		cnt++;
	}
	cout<<"The binary conversion is ";
	for(int i=cnt-1;i>=0;i--)
	{
		cout<<a[i];
	}

}
void bin_to_decimal()
{
	int num,cnt=0;
	cout<<"Enter the binary number you want to convert: ";
	cin>>num;
	int dec_value=0;
	int base=1;
	int temp = num;
	while(temp)
	{
		int last_digit = temp%10;
		temp = temp/10;
		dec_value = dec_value+last_digit*base;
		base = base*2;
	}
	cout<<"The converted number in Decimal is: "<<dec_value;
}


int main()
{
	cout<<"----- Number System Conversions -----";
	int choice;
	cout<<endl;
	cout<<'\t'<<"MENU"<<'\n';
	cout<<"1. Decimal to Binary conversion"<<endl;
	cout<<"2. Binary to Decimal conversion"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	switch (choice) {
		case 1:
			dec_to_binary();
			break;
		case 2:
			bin_to_decimal();
			break;
		default:
			cout<<"Invalid choice";
			break;
	}

}
