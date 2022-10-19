#include "Undergrad.h"

void Undergrad::Learn(int moduleNumber)
{
	switch (Modules(moduleNumber)) 
	{

	case Modules::ComputerGamingHardwareArchitectures:
		if (studentCredits[moduleNumber] < 10)
		{
			studentCredits[moduleNumber] = studentCredits[moduleNumber] + 0.5;
			break;
		}

		else if (10 < studentCredits[moduleNumber] < 20)
		{
			studentCredits[moduleNumber]++;
			break;
		}

		else if (20 < studentCredits[moduleNumber] < 30)
		{
			studentCredits[moduleNumber] = studentCredits[moduleNumber] + 2;
			break;
		}

		else if (studentCredits[moduleNumber] >= 30)
		{
			std::cout << "You already got max credits!" << std::endl;
			break;
		}

		break;

	case Modules::GameDesignandDevelopment:
		if (studentCredits[moduleNumber] < 10)
		{
			studentCredits[moduleNumber] = studentCredits[moduleNumber] + 0.5;
			break;
		}

		else if (10 < studentCredits[moduleNumber] < 20)
		{
			studentCredits[moduleNumber]++;
			break;
		}

		else if (20 < studentCredits[moduleNumber] < 30)
		{
			studentCredits[moduleNumber] = studentCredits[moduleNumber] + 2;
			break;
		}

		else if (studentCredits[moduleNumber] >= 30)
		{
			std::cout << "You already got max credits!" << std::endl;
			break;
		}

		break;

	case Modules::GameProgramming:
		if (studentCredits[moduleNumber] < 10)
		{
			studentCredits[moduleNumber] = studentCredits[moduleNumber] + 0.5;
			break;
		}

		else if (10 < studentCredits[moduleNumber] < 20)
		{
			studentCredits[moduleNumber]++;
			break;
		}

		else if (20 < studentCredits[moduleNumber] < 30)
		{
			studentCredits[moduleNumber] = studentCredits[moduleNumber] + 2;
			break;
		}

		else if (studentCredits[moduleNumber] >= 30)
		{
			std::cout << "You already got max credits!" << std::endl;
			break;
		}

		break;

	case Modules::LogicandMathematicalTechniques:
		if (studentCredits[moduleNumber] < 10)
		{
			studentCredits[moduleNumber] = studentCredits[moduleNumber] + 0.5;
			break;
		}

		else if (10 < studentCredits[moduleNumber] < 20)
		{
			studentCredits[moduleNumber]++;
			break;
		}

		else if (20 < studentCredits[moduleNumber] < 30)
		{
			studentCredits[moduleNumber] = studentCredits[moduleNumber] + 2;
			break;
		}

		else if (studentCredits[moduleNumber] >= 30)
		{
			std::cout << "You already got max credits!" << std::endl;
			break;
		}

		break;
	}

}

void Undergrad::TotalCredits()
{
	std::cout << "Your Total Credits are:" << std::endl;
	std::cout << "Computer GamingHardware Architectures: " << studentCredits[0] << std::endl;
	std::cout << "GameDesign and Development:" << studentCredits[1] << std::endl;
	std::cout << "Game Programming: " << studentCredits[2] << std::endl;
	std::cout << "Logic and Mathematical Techniques: " << studentCredits[3] << std::endl;
}
