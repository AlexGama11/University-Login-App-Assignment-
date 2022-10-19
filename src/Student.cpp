#include "Student.h"

int Student::UniStudent()
{

	std::cout << "Student Profile:" << std::endl;

	std::cout << "Name: " << info.studentName << std::endl;

	std::cout << "Address: " << info.studentAddress << std::endl;

	std::cout << "Username: " << info.studentUsername << std::endl;

	std::cout << "ID: " << info.studentID << std::endl;

	std::cout << "Degree Type: " << info.studentDegree << std::endl;

	return 0;
}

void Student::Learn(int moduleNumber)
{

}

void Student::SetStudentVars(const std::string& var, int whatLine)
{
	
	//use enums
	switch (LineNumber(whatLine))
	{
	case LineNumber::FirstLine:
		info.studentName = var;
		break;

	case LineNumber::SecondLine:
		info.studentAddress = var;
		break;

	case LineNumber::ThirdLine:
		info.studentID = var;
		break;

	case LineNumber::FourthLine:
		info.studentUsername = var;
		break;

	case LineNumber::FifthLine:
		info.studentPassword = var;
		break;

	case LineNumber::SixthLine:
		info.studentDegree = var;
		break;

	default:
		std::cout << "Error in setting student variables!" << std::endl;
		break;

	}

}

void Student::TotalCredits()
{
	
}