#include <iostream>
#include "University.h"

int main()
{

	std::cout << "Hello World!" << std::endl;

	University university;
	Student student;
	university.RegisterStudent(student);

	//system("pause");
	return 0;
}