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

std::string Student::Advance(std::string& degree)
{
	if (degree == "UNDERGRAD" || degree == "UNDERGRADUATE")
	{
		for (int i = 1; i <= 4; i++)
		{
			totalCredits = totalCredits + studentCredits.at(i);
		}
		
		if (totalCredits == 120)
		{
			degree = "Masters";
			return degree;
		}
		return degree;
	}

	else if (degree == "MASTERS")
	{
		for (int i = 1; i <= 4; i++)
		{
			totalCredits = totalCredits + studentCredits.at(i);
		}

		if (totalCredits == 120)
		{
			degree = "Phd";
			return degree;
		}

		return degree;
	}

	else if (degree == "PHD" || degree == "DOCTORATE")
	{
		for (int i = 1; i <= 6; i++)
		{
			totalCredits = totalCredits + studentCredits.at(i);
		}

		if (totalCredits == 210)
		{
			degree = "Graduated!";
			return degree;
		}

		return degree;
	}

	else
	{
		std::cout << "Error, couldn't get your grades!" << std::endl;
	}

	return degree;
}
