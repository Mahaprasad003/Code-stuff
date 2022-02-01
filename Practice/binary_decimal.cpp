#include<iostream>
#include<string.h>
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
	int num;
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
void dec_to_octal()
{
	int n,a[32],cnt=0;
	cout<<"Enter the decimal number you want to  convert: ";
	cin>>n;

	for(int i=0;n>0;i++)
	{
		a[i] = n%8;
		n=n/8;
		cnt++;
	}
	cout<<"The binary conversion is ";
	for(int i=cnt-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
void octal_to_decimal()
{
	int n;
	cout<<"Enter the octal number you want to convert: 0";
    int num = n;
    int dec_value = 0;
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 8;
    }
	cout<<"The converted value is: ";
     cout<<dec_value;
}
void dec_to_hexa()
{
	int n;
	cout<<"Enter the number you want to convert: ";
	cin>>n;
    char hexaDeciNum[32];
    int i = 0;
    while (n != 0) {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }
    cout<<"The converted number is: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << hexaDeciNum[j];
    }
}
int hex_to_decimal()
{
	string hexVal;
	cout<<"Enter the number you want to convert: ";
	cin>>hexVal;
    int len = hexVal.size();
    int base = 1;

    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;
            base = base * 16;
        }
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
            base = base * 16;
        }
    }
    return dec_val;
}




int main()
{
	cout<<"----- Number System Conversions -----";
	int choice;
	cout<<endl;
	cout<<'\t'<<"MENU"<<'\n';
	cout<<"1. Decimal to Binary conversion"<<endl;
	cout<<"2. Binary to Decimal conversion"<<endl;
	cout<<"3. Decimal to Octal conversion"<<endl;
	cout<<"4. Octal to Decimal conversion"<<endl;
	cout<<"5. Decimal to Hexadecimal conversion"<<endl;
	cout<<"6. Hexadecimal to Decimal conversion"<<endl;


	cout<<"Enter your choice: ";
	cin>>choice;
	switch (choice) {
		case 1:
			dec_to_binary();
			break;
		case 2:
			bin_to_decimal();
			break;
		case 3:
			dec_to_octal();
			break;
		case 4:
			octal_to_decimal();
			break;
		case 5:
			dec_to_hexa();
			break;
		case 6:
			hex_to_decimal();
			break;
		default:
			cout<<"Invalid choice";
			break;
	}

}
