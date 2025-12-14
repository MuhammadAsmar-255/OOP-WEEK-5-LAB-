// L1F24BSCS0069 - MUHAMMAD ASMAR NAEEM

#include "SmartPhone.h"

int main() {
    cout << "Creating SmartPhone 1 (Default Constructor):" << endl;
    SmartPhone s1;
    s1.displayDetails();

    cout << "Creating SmartPhone 2 (Partial Constructor - Brand & Model):" << endl;
    SmartPhone s2("Samsung", "Galaxy S25");
    s2.displayDetails();

    cout << "Creating SmartPhone 3 (Full Parameterized Constructor):" << endl;
    SmartPhone s3("Apple", "iPhone 16", 450000, 512);
    s3.displayDetails();

    cout << "Creating SmartPhone 4 (Deep Copy Constructor from s3):" << endl;
    SmartPhone s4(s3);
    s4.displayDetails();

    cout << "Updating SmartPhone 2 details using setters:" << endl;
    s2.setPrice(120000);
    s2.setStorage(256);
    s2.displayDetails();

    cout << "Displaying all SmartPhones again:" << endl;
    s1.displayDetails();
    s2.displayDetails();
    s3.displayDetails();
    s4.displayDetails();

    cout << "Program ending... destructors will be called automatically." << endl;

    return 0;
}
