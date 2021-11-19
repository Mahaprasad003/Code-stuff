#include<iostream>

using namespace std;

int main(){
    int r,per,area;
    cout<<"Enter the radius of the circle: ";
    cin>>r;

    per = 2 * 3.14 * r;
    area = 3.14 * r * r;

    cout<<"The perimeter of the circle is: "<<per<<endl;
    cout<<"The area of the circle is: "<<area;
    
    return 0;
}