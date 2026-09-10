#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    int age;

public:
    void read();
    void display();
};

inline void Student::read() {
    rollno = 10;
    age = 20;
}

inline void Student::display() {
    cout << "\nrollno = " << rollno << "\nage = " << age << endl;
}

int main() {
    Student s;
    
    s.read();
    s.display();
    
    return 0;
}
