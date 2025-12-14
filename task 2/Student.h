#include<iostream>
using namespace std;
class Student {
private:
	//decleraing variables
	char* name = NULL;
	char* registrationNumber = NULL;
	float CGPA = 0.0;
	int semester = 0;
public:
	//deafult constructor
	Student();
	//Parametrized constructor
	Student(char* name, char* registrationNumber, float CGPA, int semester);
	//destructor constructor
	~Student();
	//setters
	void setname(char* name);
	void setregistrationNumber(char* registrationNumber);
	void setCGPA(float CGPA);
	void setsemester(int semester);
	//getters
	char* getname();
	char* getregistrationNumber();
	float getCGPA();
	int	  getsemester();
	//copy constructor
	Student(const Student &obj);
	//display function
	void display();
};