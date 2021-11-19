#include<iostream>

using namespace std;

int main(){
    int f,c;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>f;

    c = ((f - 32) * 5) / 9;

    cout<<"The temperature in Celsius is "<<c;

    return 0;
}