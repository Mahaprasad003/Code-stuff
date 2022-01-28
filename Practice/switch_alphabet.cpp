#include<bits/stdc++.h>
using namespace std;

void upper()
{
    cout<<"Enter a string: ";
    char a[20];
    cin>>a;
    cout<<strupr(a);
}
void lower()
{
    cout<<"Enter a string: ";
    char a[20];
    cin>>a;
    cout<<strlwr(a);
}
void combine()
{
    cout<<"Enter first string: ";
    char a[20],b[20];
    cin>>a;
    cout<<"Enter second string: ";
    cin>>b;
    cout<<strcat(a,b);
}
void copied()
{
    cout<<"Enter a string: ";
    char a[20],b[20];
    cin>>a;
    strcpy(a,b);
    cout<<"Copied string is "<<b;
}
void rev()
{
    cout<<"Enter a string: ";
    char a[20];
    cin>>a;
    cout<<strrev(a);
}


int main()
{
    int choice;
    cout<<"----- String Manipulations -----"<<"\n";
    cout<<"1. Lower to Upper"<<"\n";
    cout<<"2. Upper to Lower"<<"\n";
    cout<<"3. Combine 2 strings"<<"\n";
    cout<<"4. Copy a string"<<"\n";
    cout<<"5. Reverse a string"<<"\n";
    cout<<"Choose a choice to perform: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        upper();
        break;
    case 2:
        lower();
        break;
    case 3:
        combine();
        break;
    case 4:
        copied();
        break;
    case 5:
        rev();
        break;
    
    default:
        cout<<"Invalid choice";
        break;
    }

}