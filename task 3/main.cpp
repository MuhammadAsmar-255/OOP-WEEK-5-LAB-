#include "Laptop.h"
int main() {
    // Create two Laptop objects with different values
    char brand1[100] = "Dell Inspiron";
    char brand2[100] = "HP Pavilion";

    Laptop l1(brand1, 16, 1200.50);
    Laptop l2(brand2, 8, 950.75);

    l1.display();
    l2.display();

    // Use copy constructor to make a deep copy
    Laptop l3(l1);

    l3.display();

    // Modify l3 using setters to check independence
    char newBrand[100] = "Lenovo ThinkPad";
    l3.setBrand(newBrand);
    l3.setRamSize(32);
    l3.setPrice(2000.00);

    
    l3.display();

    cout << "Original l1 remains unchanged:" << endl;
    l1.display();

    return 0;
}
