#include "Student.h"

//default constructor
Student::Student() {
	char* name = NULL;
	char* registrationNumber = NULL;
	float CGPA = 0.0;
	int semester = 0;
}

//parametrized construtor
Student::Student(char* name, char* registrationNumber, float CGPA, int semester) {
	this->name = name;
	this->registrationNumber = registrationNumber;
	this->CGPA = CGPA;
	this->semester = semester;
}

//setters
void Student::setname(char* name) {
	this->name = name;
}

void Student::setregistrationNumber(char* registrationNumber) {
	this->registrationNumber = registrationNumber;
}

void Student::setCGPA(float CGPA) {
	this->CGPA = CGPA;
}

void Student::setsemester(int semester) {
	this->semester = semester;
}

//getters
float Student::getCGPA() {
	return CGPA;
}

char* Student::getname() {
	return name;
}

char* Student::getregistrationNumber() {
	return registrationNumber;
}

int Student::getsemester() {
	return semester;
}


//copy construtor for deep copy
Student::Student(const Student &obj) {
	//for deep copy of name
	int lenght1=0; //finding the lenght for making the dynamic memory allocation accordingly
	for (int i = 0; obj.name[i]!='\0'; i++) { //logic to find the lenght
		lenght1++;
	}
	name = new char[lenght1 + 1];//creating the dynamic memeory according to the lenght and adding 1 for null terminator 
	for (int i = 0; i < lenght1; i++) { //copying the data in name 
		name[i] = obj.name[i];
	}
	name[lenght1] = '\0';//adding the null terminator at the end

	//for deep copy of registration number
	int lenght2 = 0;//finding the lenght for the dynamic allocation
	for (int i = 0; obj.registrationNumber[i] != '\0'; i++) {//logic to find the lenght of the array
		lenght2++;
	}
	registrationNumber = new char[lenght2 + 1];//creating the dynamic memory according to the lenght and adding 1 for the null terminator
	for (int i = 0; i < lenght2; i++) {
		registrationNumber[i] = obj.registrationNumber[i];//copying the registration number in dynamically allocated array
	}
	registrationNumber[lenght2] = '\0';//addding the null terminator
	//deep copy of CGPA
	CGPA = obj.CGPA;
	//deep copy of semester
	semester = obj.semester;
}

//display function
void Student::display() {
	cout << "The name of the student is " << name << endl;
	cout << "His registration number is " << registrationNumber << endl;
	cout << "His CGPA is " << CGPA << endl;
	cout<< "And his semester is " << semester << endl;
}

//destructor constructor
Student::~Student() {
		if (name != NULL) {
			delete[] name;             
			name = NULL;               
		}
		if (registrationNumber != NULL) {
			delete[] registrationNumber;
			registrationNumber = NULL;
		}
	}