#include <iostream>
#include <cstring> // Required for strcmp()
using namespace std;

class Comparison {
private:
    char str[20];

public:
    void readdata() {
        cout << "Enter the string: ";
        cin >> str;
    }

    // Overloading == operator returning a boolean
    bool operator==(const Comparison &obj2) {
        return strcmp(str, obj2.str) == 0;
    }
};

int main() {
    Comparison obj1, obj2;

    obj1.readdata();
    obj2.readdata();

    // Natural usage using bool return
    if (obj1 == obj2) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    return 0;
}
