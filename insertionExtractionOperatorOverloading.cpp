#include <iostream>
using namespace std;

class Student {
private:
    int ID;
    char name[30];

public:
    // Overloading Extraction Operator (>>) to enable: cin >> s
    // Returns istream& to support stream chaining (e.g., cin >> s1 >> s2)
    friend istream& operator>>(istream &in, Student &s) {
        in >> s.ID >> s.name;
        return in;
    }

    // Overloading Insertion Operator (<<) to enable: cout << s
    // Returns ostream& to support stream chaining (e.g., cout << s1 << s2)
    friend ostream& operator<<(ostream &out, const Student &s) {
        out << "ID: " << s.ID << endl;
        out << "Name: " << s.name << endl;
        return out;
    }
};

int main() {
    Student s;

    cout << "Enter ID and Name: ";
    cin >> s;

    cout << "\nStudent Details:\n";
    cout << s;

    return 0;
}
