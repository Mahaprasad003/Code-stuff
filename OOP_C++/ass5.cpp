#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    void setTime(int h, int m) {
        hours = h;
        minutes = m;
    }

    void showTime() {
        cout << "Time: " << hours << " hours " << minutes << " minutes" << endl;
    }

    Time sum(Time other) {
        Time result;
        result.hours = hours + other.hours;
        result.minutes = minutes + other.minutes;

        if (result.minutes >= 60) {
            result.minutes -= 60;
            result.hours++;
        }

        return result;
    }
};

int main() {
    Time time1, time2, time3;

    time1.setTime(2, 30);
    time2.setTime(1, 45);

    cout << "Time 1:" << endl;
    time1.showTime();

    cout << "\nTime 2:" << endl;
    time2.showTime();

    time3 = time1.sum(time2);

    cout << "\nTime 3 (Sum of Time 1 and Time 2):" << endl;
    time3.showTime();

    return 0;
}
