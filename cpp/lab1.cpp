#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    float marks_subject1;
    float marks_subject2;

    void getStudentDetails() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks in subject 1: ";
        cin >> marks_subject1;

        cout << "Enter marks in subject 2: ";
        cin >> marks_subject2;
    }
};

class Details : public Student {
public:
    int roll_number;
    float height;
    float weight;

    void getDetails() {
        getStudentDetails();

        cout << "Enter roll number: ";
        cin >> roll_number;

        cout << "Enter height: ";
        cin >> height;

        cout << "Enter weight: ";
        cin >> weight;
    }

    void displayResult() {
        float total_marks = marks_subject1 + marks_subject2;
        cout << "\nResult for Roll Number " << roll_number << ":\n";
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total_marks << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    Details studentDetails;
    studentDetails.getDetails();
    studentDetails.displayResult();

    return 0;
}
