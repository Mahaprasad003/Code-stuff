#include<iostream>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;

    void getdimensions(int x, int y){
        length = x;
        breadth = y;
    }

    int getarea(){
        return length * breadth;
    }
};

int main(){

    Rectangle rect;
    rect.getdimensions(5,4);

    int area = rect.getarea();
    cout<<"Area is: "<<area;

}

