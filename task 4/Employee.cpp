#include "Employee.h"

// Default constructor
Employee::Employee() {
    this->empName = NULL;
    this->salary = 0.0;
    this->designation = NULL;
    this->address = NULL;
}

// Parameterized constructor (Deep Copy)
Employee::Employee(char* empName, float salary, char* designation, char* address) {
    // Deep copy for empName
    int len1 = 0;
    while (empName[len1] != '\0') len1++;
    this->empName = new char[len1 + 1];
    for (int i = 0; i < len1; i++) this->empName[i] = empName[i];
    this->empName[len1] = '\0';

    // Deep copy for designation
    int len2 = 0;
    while (designation[len2] != '\0') len2++;
    this->designation = new char[len2 + 1];
    for (int i = 0; i < len2; i++) this->designation[i] = designation[i];
    this->designation[len2] = '\0';

    // Deep copy for address
    int len3 = 0;
    while (address[len3] != '\0') len3++;
    this->address = new char[len3 + 1];
    for (int i = 0; i < len3; i++) this->address[i] = address[i];
    this->address[len3] = '\0';

    this->salary = salary;
}

// Copy constructor
Employee::Employee(const Employee& obj) {
    // Deep copy for empName
    int len1 = 0;
    while (obj.empName[len1] != '\0') len1++;
    this->empName = new char[len1 + 1];
    for (int i = 0; i < len1; i++) this->empName[i] = obj.empName[i];
    this->empName[len1] = '\0';

    // Deep copy for designation
    int len2 = 0;
    while (obj.designation[len2] != '\0') len2++;
    this->designation = new char[len2 + 1];
    for (int i = 0; i < len2; i++) this->designation[i] = obj.designation[i];
    this->designation[len2] = '\0';

    // Deep copy for address
    int len3 = 0;
    while (obj.address[len3] != '\0') len3++;
    this->address = new char[len3 + 1];
    for (int i = 0; i < len3; i++) this->address[i] = obj.address[i];
    this->address[len3] = '\0';

    this->salary = obj.salary;
}

// Destructor
Employee::~Employee() {
    cout << "Destructor called for Employee: ";
    if (this->empName != NULL) cout << this->empName;
    cout << " — Farewell!" << endl;

    if (this->empName != NULL) {
        delete[] this->empName;
        this->empName = NULL;
    }
    if (this->designation != NULL) {
        delete[] this->designation;
        this->designation = NULL;
    }
    if (this->address != NULL) {
        delete[] this->address;
        this->address = NULL;
    }
}

// Setters (Deep Copy)
void Employee::setEmpName(char* empName) {
    if (this->empName != NULL) delete[] this->empName;
    int len = 0;
    while (empName[len] != '\0') len++;
    this->empName = new char[len + 1];
    for (int i = 0; i < len; i++) this->empName[i] = empName[i];
    this->empName[len] = '\0';
}

void Employee::setSalary(float salary) {
    this->salary = salary;
}

void Employee::setDesignation(char* designation) {
    if (this->designation != NULL) delete[] this->designation;
    int len = 0;
    while (designation[len] != '\0') len++;
    this->designation = new char[len + 1];
    for (int i = 0; i < len; i++) this->designation[i] = designation[i];
    this->designation[len] = '\0';
}

void Employee::setAddress(char* address) {
    if (this->address != NULL) delete[] this->address;
    int len = 0;
    while (address[len] != '\0') len++;
    this->address = new char[len + 1];
    for (int i = 0; i < len; i++) this->address[i] = address[i];
    this->address[len] = '\0';
}

// Getters
char* Employee::getEmpName() {
    return this->empName;
}

float Employee::getSalary() {
    return this->salary;
}

char* Employee::getDesignation() {
    return this->designation;
}

char* Employee::getAddress() {
    return this->address;
}

// Display function
void Employee::display() {
    cout << "Employee Name: " << this->empName << endl;
    cout << "Salary: $" << this->salary << endl;
    cout << "Designation: " << this->designation << endl;
    cout << "Address: " << this->address << endl;
    cout << endl;
}
