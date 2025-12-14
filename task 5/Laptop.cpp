#include "Laptop.h"

// Default Constructor
Laptop::Laptop() {
    // Set brand to "Unknown" manually
    char temp[] = "Unknown";
    int len = 0;
    while (temp[len] != '\0') len++;

    this->brand = new char[len + 1];
    for (int i = 0; i < len; i++) {
        this->brand[i] = temp[i];
    }
    this->brand[len] = '\0';

    // Dynamically allocate price and set to 0.0
    this->price = new float;
    *(this->price) = 0.0;
}

// Parameterized Constructor
Laptop::Laptop(char* brand, float price) {
    // Deep copy for brand
    int len = 0;
    while (brand[len] != '\0') len++;

    this->brand = new char[len + 1];
    for (int i = 0; i < len; i++) {
        this->brand[i] = brand[i];
    }
    this->brand[len] = '\0';

    // Allocate and assign price
    this->price = new float;
    *(this->price) = price;
}

// Deep Copy Constructor
Laptop::Laptop(const Laptop& obj) {
    cout << "Deep Copy Constructor Called!" << endl;

    // Deep copy for brand
    int len = 0;
    while (obj.brand[len] != '\0') len++;

    this->brand = new char[len + 1];
    for (int i = 0; i < len; i++) {
        this->brand[i] = obj.brand[i];
    }
    this->brand[len] = '\0';

    // Allocate and copy price
    this->price = new float;
    *(this->price) = *(obj.price);
}

// Destructor
Laptop::~Laptop() {
    cout << "Destructor Called for Laptop: " << this->brand << endl;
    delete[] this->brand;
    delete this->price;
}

// Setters
void Laptop::setBrand(char* brand) {
    if (this->brand != NULL)
        delete[] this->brand;

    int len = 0;
    while (brand[len] != '\0') len++;

    this->brand = new char[len + 1];
    for (int i = 0; i < len; i++) {
        this->brand[i] = brand[i];
    }
    this->brand[len] = '\0';
}

void Laptop::setPrice(float p) {
    *(this->price) = p;
}

// Getters
char* Laptop::getBrand() {
    return this->brand;
}

float Laptop::getPrice() {
    return *(this->price);
}

// Display Function
void Laptop::displayDetails() {
    cout << "Brand: " << this->brand << endl;
    cout << "Price: " << *(this->price) << endl;
    cout << "-----------------------------" << endl;
}
