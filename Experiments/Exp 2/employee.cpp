#include<iostream>

using namespace std;

int main()
{
    string name;
    int emp_num, bs, ha, da, gross_sal;
    cout<<"Enter name of the employee: ";
    cin>>name;
    cout<<"Enter employee number: ";
    cin>>emp_num;
    cout<<"Enter basic salary: ";
    cin>>bs;
    
    if (bs>=20000)
    {
        ha = 0.1 * bs;
        da = 0.5 * bs;
        gross_sal = bs + ha + da;
        cout<<"Housing allowance is "<<ha<<endl;
        cout<<"Daily allowance is "<<da<<endl;
        cout<<"Gross salary is "<<gross_sal;

    }
    else if (bs > 10000 && bs < 20000)
    {
        ha = 0.08 * bs;
        da = 0.4 * bs;
        gross_sal = bs + ha + da;
        cout<<"Housing allowance is "<<ha<<endl;
        cout<<"Daily allowance is "<<da<<endl;
        cout<<"Gross salary is "<<gross_sal;
    }
    else
    {
        ha = 0.06 * bs;
        da = 0.3 * bs;
        gross_sal = bs + ha + da;
        cout<<"Housing allowance is "<<ha<<endl;
        cout<<"Daily allowance is "<<da<<endl;
        cout<<"Gross salary is "<<gross_sal;
    }

    return 0;
    
    
}