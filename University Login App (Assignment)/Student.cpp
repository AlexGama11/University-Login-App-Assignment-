#include "Student.h"

int Student::UniStudent()
{

	std::cout << "Student Profile:" << std::endl;

	std::cout << "Name: " << records.GetName() << std::endl;

	std::cout << "Address: " << records.GetAddress() << std::endl;

	std::cout << "Username: " << records.GetUsername() << std::endl;

	std::cout << "ID: " << records.GetID() << std::endl;

	std::cout << "Your Total Credits are:" << std::endl;

	std::cout << "Advanced C++ Programming: " << GetCreditsOne() << std::endl;

	std::cout << "Graphics And Shader Programming:" << GetCreditsTwo() << std::endl;

	std::cout << "Game Engine Development: " << GetCreditsThree() << std::endl;

	std::cout << "Augmented Toy Development: " << GetCreditsFour() << std::endl;

	std::cout << "\nTo increase your credits, attend a lecture! \n" << std::endl;

	return 0;
}

void Student::Learn(int moduleNumber)
{
	if (studentCredits[moduleNumber - 1] < 10)
	{
		studentCredits[moduleNumber - 1] = studentCredits[moduleNumber - 1] + 0.05;
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

int Student::GetCreditsOne()
{
	return studentCredits[0];
}

int Student::GetCreditsTwo()
{
	return studentCredits[1];
}

int Student::GetCreditsThree()
{
	return studentCredits[2];
}

int Student::GetCreditsFour()
{
	return studentCredits[3];
}
