// Design class demo which will contain the following methods
// Read number, Factorial, Reverse number, Ispalindrome, IsArmstrong
//Where readNumber will be a private method.
#include<bits/stdc++.h>
using namespace std;

class Demo {
private:
    int num;

    void readNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }

public:
    Demo() {
        readNumber();
    }

    long long factorial() {
        long long result = 1;
        for (int i = 1; i <= num; ++i) {
            result *= i;
        }
        return result;
    }

    int reverseNumber() {
        int reversed = 0;
        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        return reversed;
    }

    bool isPalindrome() {
        int originalNum = num;
        int reversed = 0;
        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        return originalNum == reversed;
    }

    bool isArmstrong() {
        int originalNum = num;
        int sum = 0;
        int numDigits = 0;
        int temp = num;

        while (temp != 0) {
            numDigits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }

        return originalNum == sum;
    }
};

int main() {
    Demo d;

    cout << "Factorial: " << d.factorial() << std::endl;
    cout << "Reverse Number: " << d.reverseNumber() << std::endl;
    cout << "Is Palindrome: " << (d.isPalindrome() ? "Yes" : "No") << std::endl;
    cout << "Is Armstrong: " << (d.isArmstrong() ? "Yes" : "No") << std::endl;

    return 0;
}
