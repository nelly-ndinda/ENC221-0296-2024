#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string empName;
    int empAge;
    int yearsOfService;
    double empSalary;

public:
    // Parameterized constructor
    Employee(string n, int a, int y, double s) {
        empName = n;
        empAge = a;
        yearsOfService = y;
        empSalary = s;
    }

    // Destructor
    ~Employee() {
        cout << "Cleaning up Employee object for: " << empName << endl;
    }

    // Accessor methods
    string getName() { return empName; }
    int getAge() { return empAge; }
    int getServiceYear() { return yearsOfService; }
    double getSalary() { return empSalary; }
};

int main() {
    Employee e1("Alice Johnson", 28, 3, 42000.50);

    cout << "Employee Details:" << endl;
    cout << "Name: " << e1.getName() << endl;
    cout << "Age: " << e1.getAge() << endl;
    cout << "Years of Service: " << e1.getServiceYear() << endl;
    cout << "Salary: $" << e1.getSalary() << endl;

    return 0;
}
