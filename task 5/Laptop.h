#include <iostream>
using namespace std;

class Laptop {
private:
    char* brand;     // dynamically allocated brand name
    float* price;    // dynamically allocated float pointer

public:
    // Default Constructor
    Laptop();

    // Parameterized Constructor
    Laptop(char* brand, float price);

    // Deep Copy Constructor
    Laptop(const Laptop& obj);

    // Destructor
    ~Laptop();

    // Setters
    void setBrand(char* brand);
    void setPrice(float p);

    // Getters
    char* getBrand();
    float getPrice();

    // Display Function
    void displayDetails();
};
