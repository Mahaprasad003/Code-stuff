#include <iostream>

class FibonacciSeries {
private:
    int n;

public:
    
    FibonacciSeries(int num);
    void displaySeries();
};


FibonacciSeries::FibonacciSeries(int num) {
    n = num;
}


void FibonacciSeries::displaySeries() {
    int first = 0, second = 1, next;

    std::cout << "Fibonacci Series for first " << n << " terms:\n";

    for (int i = 0; i < n; ++i) {
        std::cout << first << ", ";

        next = first + second;
        first = second;
        second = next;
    }

    std::cout << std::endl;
}

int main() {

    FibonacciSeries fibonacci(15);
    fibonacci.displaySeries();

    return 0;
}
