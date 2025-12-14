// L1F24BSCS0069 - MUHAMMAD ASMAR NAEEM

#include <iostream>
#include <string>
using namespace std;

class SmartPhone {
private:
    string brand;
    string model;
    float price;
    int storage;

public:
    // Default Constructor
    SmartPhone();

    // Constructor with brand and model only
    SmartPhone(string brand, string model);

    // Constructor with all parameters
    SmartPhone(string brand, string model, float price, int storage);

    // Deep Copy Constructor
    SmartPhone(const SmartPhone& obj);

    // Destructor
    ~SmartPhone();

    // Setters
    void setBrand(string brand);
    void setModel(string model);
    void setPrice(float price);
    void setStorage(int storage);

    // Getters
    string getBrand();
    string getModel();
    float getPrice();
    int getStorage();

    // Display function
    void displayDetails();
};
