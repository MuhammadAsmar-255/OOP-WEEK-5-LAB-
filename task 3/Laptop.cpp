#include "Laptop.h"

// Default constructor
Laptop::Laptop() {
    brand = NULL;
    ramSize = 0;
    price = 0.0;
}

// Parameterized constructor
Laptop::Laptop(char* brand, int ramSize, float price) {
    int length = 0;
    while (brand[length] != '\0') {
        length++;
    }
    this->brand = new char[length + 1];
    for (int i = 0; i < length; i++) {
        this->brand[i] = brand[i];
    }
    this->brand[length] = '\0';
    this->ramSize = ramSize;
    this->price = price;
}
// Copy constructor
Laptop::Laptop(const Laptop& obj) {
    int length = 0;
    while (obj.brand[length] != '\0') {
        length++;
    }
    brand = new char[length + 1];
    for (int i = 0; i < length; i++) {
        brand[i] = obj.brand[i];
    }
    brand[length] = '\0';
    ramSize = obj.ramSize;
    price = obj.price;
}
// Destructor
Laptop::~Laptop() {
    if (brand != NULL) {
        delete[] brand;
        brand = NULL;
    }
}
// Setters
void Laptop::setBrand(char* brand) {
    if (this->brand != NULL) {
        delete[] this->brand;
    }
    int length = 0;
    while (brand[length] != '\0') {
        length++;
    }

    this->brand = new char[length + 1];
    for (int i = 0; i < length; i++) {
        this->brand[i] = brand[i];
    }
    this->brand[length] = '\0';
}

void Laptop::setRamSize(int ramSize) {
    this->ramSize = ramSize;
}

void Laptop::setPrice(float price) {
    this->price = price;
}

// Getters
char* Laptop::getBrand() {
    return brand;
}

int Laptop::getRamSize() {
    return ramSize;
}

float Laptop::getPrice() {
    return price;
}

// Display function
void Laptop::display() {
    cout << "Laptop Brand: " << brand << endl;
    cout << "RAM Size: " << ramSize << " GB" << endl;
    cout << "Price: $" << price << endl;
    cout << endl;
}
