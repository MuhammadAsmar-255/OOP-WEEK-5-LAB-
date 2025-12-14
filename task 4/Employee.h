#include<iostream>
using namespace std;
class Employee {
private:
    char* empName;
    float salary;
    char* designation;
    char* address;
public:
    // Default constructor
    Employee();

    // Parameterized constructor
    Employee(char* empName, float salary, char* designation, char* address);

    // Copy constructor (Deep Copy)
    Employee(const Employee& obj);

    // Destructor
    ~Employee();

    // Setters (Deep Copy)
    void setEmpName(char* empName);
    void setSalary(float salary);
    void setDesignation(char* designation);
    void setAddress(char* address);

    // Getters
    char* getEmpName();
    float getSalary();
    char* getDesignation();
    char* getAddress();

    // Display function
    void display();
};
