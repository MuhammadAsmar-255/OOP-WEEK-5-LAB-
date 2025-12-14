#include "Employee.h"

int main() {
    // Data for first employee
    char name1[100] = "Asmar Naeem";
    char designation1[100] = "Software Engineer";
    char address1[100] = "Lahore, Pakistan";
    float salary1 = 120000.0;

    // Data for second employee
    char name2[100] = "Ahmad Raza";
    char designation2[100] = "Project Manager";
    char address2[100] = "Karachi, Pakistan";
    float salary2 = 150000.0;

    // Default constructor
    cout << "Creating Employee 1 (Default Constructor):" << endl;
    Employee e1;
    e1.setEmpName(name1);
    e1.setSalary(salary1);
    e1.setDesignation(designation1);
    e1.setAddress(address1);
    e1.display();

    // Parameterized constructor
    cout << "Creating Employee 2 (Parameterized Constructor):" << endl;
    Employee e2(name2, salary2, designation2, address2);
    e2.display();

    // Copy constructor
    cout << "Creating Employee 3 (Copy Constructor from e1):" << endl;
    Employee e3(e1);
    e3.display();

    cout << "Program is ending, destructors will be called automatically." << endl;

    return 0;
}
