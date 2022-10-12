#include "Student.h"

int Student::UniStudent()
{

	std::cout << "Student Profile:" << std::endl;

	std::cout << "Name: " << info.studentName << std::endl;

	std::cout << "Address: " << info.studentAddress << std::endl;

	std::cout << "Username: " << info.studentUsername << std::endl;

	std::cout << "ID: " << info.studentID << std::endl;

	std::cout << "Your Total Credits are:" << std::endl;

	std::cout << "Advanced C++ Programming: " << studentCredits[0] << std::endl;

	std::cout << "Graphics And Shader Programming:" << studentCredits[1] << std::endl;

	std::cout << "Game Engine Development: " << studentCredits[2] << std::endl;

	std::cout << "Augmented Toy Development: " << studentCredits[3] << std::endl;

	std::cout << "\nTo increase your credits, attend a lecture! \n" << std::endl;

	return 0;
}

void Student::Learn(int moduleNumber)
{
	if (studentCredits[moduleNumber - 1] < 10)
	{
		studentCredits[moduleNumber - 1] = studentCredits[moduleNumber - 1] + 0.5;
	}

	else if (10 < studentCredits[moduleNumber - 1] < 20)
	{
		studentCredits[moduleNumber - 1]++;
	}

	else if (20 < studentCredits[moduleNumber - 1] < 30)
	{
		studentCredits[moduleNumber - 1] = studentCredits[moduleNumber - 1] + 2;
	}

	else if (studentCredits[moduleNumber - 1] >= 30)
	{
		std::cout << "You already got max credits!" << std::endl;
	}
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

	default:
		std::cout << "Error in setting student variables!" << std::endl;
		break;

	}

}

void Student::TotalCredits()
{
	std::cout << "Your Total Credits are:" << std::endl;
	std::cout << "Advanced C++ Programming: " << studentCredits[0] << std::endl;
	std::cout << "Graphics And Shader Programming:" << studentCredits[1] << std::endl;
	std::cout << "Game Engine Development: " << studentCredits[2] << std::endl;
	std::cout << "Augmented Toy Development: " << studentCredits[3] << std::endl;
}
