#include <iostream>
using namespace std;

class employee {
public:
    int employeeID;
    int salary;

    void getdata() {
        cout << "Enter employee ID: ";
        cin >> employeeID;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displaydata() {
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    employee e1;
    
    e1.getdata();
    e1.displaydata();
    
    return 0;
}
