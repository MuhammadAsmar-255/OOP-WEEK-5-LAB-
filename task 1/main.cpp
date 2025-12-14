//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include"Book.h"
int main() {
	//declearing the char arary string for updating the data
	char bookName1[100] = "C++ programming";
	char Author1[100] = "Afham nazir";
	float price1 = 2066.57;
	char bookName2[100] = "OOP programming";
	char Author2[100] = "Asmar Naeem";
	float price2 = 3066.57;
	//making two objects
	Book obj1(bookName1,Author1,price1);
	Book obj2 = obj1;//copying the constructor
	//dispkaying the content before the updatation
	obj1.display();
	obj2.display();
	//setting the new data in obj 2 so se the effect of shalow copy
	obj2.setauthorName(Author2);
	obj2.setName(bookName2);
	obj2.setPrice(price2);
	//again displaying the data
	obj1.display();
	obj2.display();

	return 0;
}