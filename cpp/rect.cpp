#include <iostream>

class Rectangle {
    private:
        double length;
        double width;

    public:
        void setLength(double l) {
            length = l;
        }

        void setWidth(double w) {
            width = w;
        }

        double getArea() {
            return length * width;
        }

        double getPerimeter() {
            return 2 * (length + width);
        }
};

int main() {
    Rectangle rect;
    double length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    rect.setLength(length);
    rect.setWidth(width);

    double area = rect.getArea();
    double perimeter = rect.getPerimeter();

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

    return 0;
}