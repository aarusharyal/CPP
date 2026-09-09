#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    int totalmarks = 0;

public:
    void entermarks() {
        cout << "Enter marks of student: ";
        cin >> marks;
    }

    // Function taking an object and returning an object
    Student addmarks(const Student &m1) {
        Student m3;
        m3.totalmarks = marks + m1.marks;
        return m3;
    }

    void displaymarks() {
        cout << "Total marks = " << totalmarks << endl;
    }
};

int main() {
    Student s1, s2, s3;

    s1.entermarks();
    s2.entermarks();

    s3 = s1.addmarks(s2);
    s3.displaymarks();

    return 0;
}
