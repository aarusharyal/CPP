#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default Constructor
    Student() {
        name = "unknown";
        age = 0;
    }

    // Constructor with 1 parameter
    Student(string n) {
        name = n;
        age = 0;
    }

    // Constructor with 2 parameters
    Student(string n, int a) {
        name = n;
        age = a; // Fixed: assigning parameter 'a' to 'age'
    }

    void display() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1;                  // Default
    Student s2("Ram");           // Single-parameter
    Student s3("Hari", 20);      // Two-parameter

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
