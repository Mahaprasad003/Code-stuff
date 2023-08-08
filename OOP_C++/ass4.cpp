#include <iostream>

using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float len) {
        length = len;
    }

    void setWidth(float wid) {
        width = wid;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    float area() {
        return length * width;
    }

    void show() {
        cout << "Length: " << length << " Width: " << width << endl;
    }

    int sameArea(Rectangle x) {
        return area() == x.area() ? 1 : 0;
    }
};

int main() {
    Rectangle rectangle1, rectangle2;

    rectangle1.setLength(5);
    rectangle1.setWidth(2.5);

    rectangle2.setLength(5);
    rectangle2.setWidth(18.9);

    cout << "Rectangle 1:" << endl;
    rectangle1.show();
    cout << "Area: " << rectangle1.area() << endl;
    cout << "Perimeter: " << rectangle1.perimeter() << endl;

    cout << "\nRectangle 2:" << endl;
    rectangle2.show();
    cout << "Area: " << rectangle2.area() << endl;
    cout << "Perimeter: " << rectangle2.perimeter() << endl;

    if (rectangle1.sameArea(rectangle2)) {
        cout << "\nRectangle 1 and Rectangle 2 have the same area." << endl;
    } else {
        cout << "\nRectangle 1 and Rectangle 2 do not have the same area." << endl;
    }

    rectangle1.setLength(15);
    rectangle1.setWidth(6.3);

    cout << "\nRectangle 1 (updated):" << endl;
    rectangle1.show();
    cout << "Area: " << rectangle1.area() << endl;
    cout << "Perimeter: " << rectangle1.perimeter() << endl;

    if (rectangle1.sameArea(rectangle2)) {
        cout << "Rectangle 1 and Rectangle 2 have the same area." << endl;
    } else {
        cout << "Rectangle 1 and Rectangle 2 do not have the same area." << endl;
    }

    return 0;
}
