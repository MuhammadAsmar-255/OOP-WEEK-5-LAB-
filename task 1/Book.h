//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
class Book {
private:
	//delecraing variables for storing data
	char* Name = NULL;
	char* authorName = NULL;
	float Price = 0.0;
public:
	//default constructor
	Book();
	//parametrized constructor
	Book(char* Name, char* authorName, float Price);
	//setters
	void setName(char* Name);
	void setauthorName(char* authorName);
	void setPrice(float Price);
	//getters
	char* getName();
	char* getauthorName();
	float getPrice();
	//function for display
	void display();
};