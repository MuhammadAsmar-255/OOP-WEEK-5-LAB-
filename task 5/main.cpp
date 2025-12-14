#include "Laptop.h"

int main() {
    cout << "Creating Laptop 1 (Default Constructor):" << endl;
    Laptop l1;
    l1.displayDetails();

    cout << "Creating Laptop 2 (Parameterized Constructor):" << endl;
    char brand2[] = "Dell";
    Laptop l2(brand2, 120000);
    l2.displayDetails();

    cout << "Creating Laptop 3 (Deep Copy Constructor from Laptop 2):" << endl;
    Laptop l3(l2);
    l3.displayDetails();

    cout << "Updating Laptop 3 Brand and Price using Setters:" << endl;
    char newBrand[] = "HP";
    l3.setBrand(newBrand);
    l3.setPrice(95000);
    l3.displayDetails();

    cout << "Original Laptop 2 (to verify deep copy):" << endl;
    l2.displayDetails();

    cout << "Program ending — destructors will now be called automatically." << endl;

    return 0;
}
