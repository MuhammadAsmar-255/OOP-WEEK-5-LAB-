// L1F24BSCS0069 - MUHAMMAD ASMAR NAEEM

#include "SmartPhone.h"

// Default Constructor
SmartPhone::SmartPhone() {
    this->brand = "Unknown";
    this->model = "Unknown";
    this->price = 0.0;
    this->storage = 0;
}

// Constructor with only brand and model
SmartPhone::SmartPhone(string brand, string model) {
    this->brand = brand;
    this->model = model;
    this->price = 0.0;
    this->storage = 0;
}

// Constructor with all parameters
SmartPhone::SmartPhone(string brand, string model, float price, int storage) {
    this->brand = brand;
    this->model = model;
    this->price = price;
    this->storage = storage;
}

// Deep Copy Constructor
SmartPhone::SmartPhone(const SmartPhone& obj) {
    cout << "Deep Copy Constructor Called!" << endl;
    this->brand = obj.brand;
    this->model = obj.model;
    this->price = obj.price;
    this->storage = obj.storage;
}

// Destructor
SmartPhone::~SmartPhone() {
    cout << "SmartPhone object destroyed. Memory released successfully." << endl;
}

// Setters
void SmartPhone::setBrand(string brand) {
    this->brand = brand;
}

void SmartPhone::setModel(string model) {
    this->model = model;
}

void SmartPhone::setPrice(float price) {
    this->price = price;
}

void SmartPhone::setStorage(int storage) {
    this->storage = storage;
}

// Getters
string SmartPhone::getBrand() {
    return this->brand;
}

string SmartPhone::getModel() {
    return this->model;
}

float SmartPhone::getPrice() {
    return this->price;
}

int SmartPhone::getStorage() {
    return this->storage;
}

// Display function
void SmartPhone::displayDetails() {
    cout << "Brand: " << this->brand << endl;
    cout << "Model: " << this->model << endl;
    cout << "Price: " << this->price << endl;
    cout << "Storage: " << this->storage << " GB" << endl;
    cout << "-----------------------------" << endl;
}
