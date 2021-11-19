#include<iostream>

using namespace std;

int main(){
    int l,b,area,per;
    cout<<"Enter the length of rectange: ";
    cin>>l;

    cout<<"Enter the breadth of rectangle: ";
    cin>>b;

    area = l * b;
    per = 2 * (l + b);

    cout<<"The area of the rectangle is: "<<area<<endl;
    cout<<"The perimeter of the rectangle is: "<<per;

    return 0;
}
