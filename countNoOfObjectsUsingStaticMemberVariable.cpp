#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        ++objectCount;
    }

    ~MyClass() {
        --objectCount;
    }

    static int getObjectCount() {
        return objectCount;
    }

private:
    static int objectCount;
};

int MyClass::objectCount = 0;

int main() {
    cout << "Objects created: " << MyClass::getObjectCount() << endl;

    MyClass a;
    cout << "Objects created: " << MyClass::getObjectCount() << endl;

    {
        MyClass b;
        MyClass c;
        cout << "Objects created: " << MyClass::getObjectCount() << endl;
    }

    cout << "Objects created after block: " << MyClass::getObjectCount() << endl;
    return 0;
}
