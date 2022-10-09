#include <iostream>
#include "University.h"

int main()
{
	University university;
	Student student;

	while (university.IsAppRunning())
	{
		university.RegisterStudent(student);
	}

	return 0;
}