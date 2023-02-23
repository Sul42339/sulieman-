#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    string job;
    string position;
    string birthdate;
    double salary;
    string marital_status;
    double bonus;
};

int main() {
    Employee emp;

    // Input employee information
    cout << "Enter employee name: ";
    getline(cin, emp.name);
    cout << "Enter employee job: ";
    getline(cin, emp.job);
    cout << "Enter employee position: ";
    getline(cin, emp.position);
    cout << "Enter employee birthdate: ";
    getline(cin, emp.birthdate);
    cout << "Enter employee salary: ";
    cin >> emp.salary;
    cout << "Enter employee marital status: ";
    cin.ignore();
    getline(cin, emp.marital_status);
    cout << "Enter employee bonus: ";
    cin >> emp.bonus;

    // Output employee information
    cout << "\nEmployee Information:" << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Job: " << emp.job << endl;
    cout << "Position: " << emp.position << endl;
    cout << "Birthdate: " << emp.birthdate << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "Marital Status: " << emp.marital_status << endl;
    cout << "Bonus: " << emp.bonus << endl;

    return 0;
}
