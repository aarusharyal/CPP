#include <iostream>
using namespace std;

class Student {
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    void display() {
        cout << age << endl;
    }
};

int main() {
    Student s;
    
    s.setAge(20);
    s.display();
    
    return 0;
}
