#include <iostream>
#include <string> // Added for std::string
using namespace std;

// Class template with two generic data types (T1 and T2)
template <typename T1, typename T2>
class Student {
public:
    T1 rollno;
    T2 name;

    // Parameterized constructor
    Student(T1 a, T2 b) {
        rollno = a;
        name = b;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    // Explicitly specifying template arguments <int, string>
    Student<int, string> s(34, "ram");

    // Invoke display method
    s.display();

    return 0;
}
