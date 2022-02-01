//WAP to take the input code name and salary of the employee(3) and display them.
// Use struct.
#include<iostream>
using namespace std;

struct employee{
	int code;
	string name;
	int sal;

};

int main()
{
	{
	// cout<<"--- First employee ---"<<endl;
	// cout<<"Enter the name: ";
	// cin>>s1.name;
	// cout<<"Enter employee code: ";
	// cin>>s1.code;
	// cout<<"Enter salary: ";
	// cin>>s1.sal;
	// cout<<endl;
	//
	// cout<<"Name of the first employee is "<<s1.name<<endl;
	// cout<<"Employee code is: "<<s1.code<<endl;
	// cout<<"Salary is "<<s1.sal<<endl;
	// cout<<endl;
	//
	// //Second employee details
	// cout<<"--- Second employee ---"<<endl;
	// cout<<"Enter the name: ";
	// cin>>s2.name;
	// cout<<"Enter employee code: ";
	// cin>>s2.code;
	// cout<<"Enter salary: ";
	// cin>>s2.sal;
	// cout<<endl;
	//
	// cout<<"Name of the second employee is "<<s2.name<<endl;
	// cout<<"Employee code is: "<<s2.code<<endl;
	// cout<<"Salary is "<<s2.sal<<endl;
	// cout<<endl;
	//
	//
	// //Third employee details
	// cout<<"--- Third employee ---"<<endl;
	// cout<<"Enter the name: ";
	// cin>>s3.name;
	// cout<<"Enter employee code: ";
	// cin>>s3.code;
	// cout<<"Enter salary: ";
	// cin>>s3.sal;
	// cout<<endl;
	//
	// cout<<"Name of the third employee is "<<s3.name<<endl;
	// cout<<"Employee code is: "<<s3.code<<endl;
	// cout<<"Salary is "<<s3.sal<<endl;
	// cout<<endl;
}
	int n;
	cout<<"Enter the number of employees: ";
	cin>>n;

	struct employee arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the name of employee"<<i+1<<" :";
		cin>>arr[i].name;
		cout<<"Enter the code of employee"<<i+1<<" :";
		cin>>arr[i].code;
		cout<<"Enter the salary of employee"<<i+1<<" :";
		cin>>arr[i].sal;
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"Name of employee"<<i+1<<"is : "<<arr[i].name<<endl;
		cout<<"Code of employee"<<i+1<<"is : "<<arr[i].code<<endl;
		cout<<"Salary of employee"<<i+1<<"is : "<<arr[i].sal<<endl;
		cout<<endl;
	}

}
