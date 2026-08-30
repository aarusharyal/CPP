#include <iostream>
#include <cstring>
using namespace std;

class student {
public:
    int rollno;
    char name[20];

    void display();
};

void student::display() {
    cout << "Roll no: " << rollno << "\n";
    cout << "Name: " << name << endl;
}

int main() {
    student s;

    // Initializing member variables
    s.rollno = 101;
    strcpy(s.name, "Alex");

    s.display();

    return 0;
}
