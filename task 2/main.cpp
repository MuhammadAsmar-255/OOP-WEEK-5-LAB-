#include"Student.h"
int main() {
	//char array data for object
	char studentName1[100] = "Asmar Naeem";
	char regnumber1[100] = "L1F24BSCS001";
	float cgpa1 = 3.0;
	int semester1 = 2;

	//char array data for updation
	char studentName2[100] = "Ahmad";
	char regnumber2[100] = "L1F24BSCS002";
	float cgpa2 = 4.0;
	int semester2 = 5;

	//creating objects
	Student obj1(studentName1,regnumber1,cgpa1,semester1);
	Student obj2(obj1);

	//displaying the data
	obj1.display();
	obj2.display();

	//updating the data by using the settter functions
	obj2.setCGPA(cgpa2);
	obj2.setname(studentName2);
	obj2.setregistrationNumber(regnumber2);
	obj2.setsemester(semester2);

	//displaying the data
	obj1.display();
	obj2.display();

	return 0;
}