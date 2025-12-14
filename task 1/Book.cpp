//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Book.h" //header file
//default constructor
Book::Book() {
	char* Name = NULL;
	char* authorName = NULL;
	float Price = 0.0;
}

//parametrized construtor
Book::Book(char* Name, char* authorName, float Price) {
	this->Name = Name;
	this->authorName = authorName;
	this->Price = Price;
}

//setters
void Book::setauthorName(char* authorName) {
	this->authorName = authorName;
}

void Book::setName(char* Name) {
	this->Name = Name;
}

void Book::setPrice(float Price) {
	this->Price = Price;
}

//getters
char* Book::getauthorName() {
	return authorName;
}

char* Book::getName() {
	return Name;
}

float Book::getPrice() {
	return Price;
}

//display function
void Book::display() {
	cout << "The name of the book is " << Name << " ,the name of the author is " << authorName << " and the price is " << Price << endl;
}