//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
class Laptop {
private:
    //declearing variables
    char* brand;       
    int ramSize;       
    float price;       
public:
    // Default constructor
    Laptop();
    // Parameterized constructor
    Laptop(char* brand, int ramSize, float price);
    // Copy constructor 
    Laptop(const Laptop& obj);
    // Destructor
    ~Laptop();
    // Setters
    void setBrand(char* brand);
    void setRamSize(int ramSize);
    void setPrice(float price);
    // Getters
    char* getBrand();
    int getRamSize();
    float getPrice();

    // Display function
    void display();
};
