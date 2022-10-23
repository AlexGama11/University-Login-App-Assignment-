#include "Undergrad.h"

void Undergrad::Learn(int moduleNumber)
{
	switch (Modules(moduleNumber)) 
	{

	case Modules::ComputerGamingHardwareArchitectures:
		
		if (studentCredits.at(moduleNumber) < 30)
		{
			srand(static_cast<unsigned int>(time(0)));
			randomNumber = rand() % 5 + 1;
			studentCredits.at(moduleNumber) = studentCredits.at(moduleNumber) + randomNumber;
			break;
		}

		else if (studentCredits[moduleNumber] >= 30)
		{
			std::cout << "You already got max credits!" << std::endl;
			break;
		}

		else
		{
			std::cout << "Error, could not add credits!" << std::endl;
			break;
		}


	case Modules::GameDesignandDevelopment:
		
		if (studentCredits.at(moduleNumber) < 30)
		{
			srand(static_cast<unsigned int>(time(0)));
			randomNumber = rand() % 5 + 1;
			studentCredits.at(moduleNumber) = studentCredits.at(moduleNumber) + randomNumber;
			break;
		}

		else if (studentCredits[moduleNumber] >= 30)
		{
			std::cout << "You already got max credits!" << std::endl;
			break;
		}

		else
		{
			std::cout << "Error, could not add credits!" << std::endl;
			break;
		}


	case Modules::GameProgramming:
		
		if (studentCredits.at(moduleNumber) < 30)
		{
			srand(static_cast<unsigned int>(time(0)));
			randomNumber = rand() % 5 + 1;
			studentCredits.at(moduleNumber) = studentCredits.at(moduleNumber) + randomNumber;
			break;
		}

		else if (studentCredits[moduleNumber] >= 30)
		{
			std::cout << "You already got max credits!" << std::endl;
			break;
		}

		else
		{
			std::cout << "Error, could not add credits!" << std::endl;
			break;
		}


	case Modules::LogicandMathematicalTechniques:
	
		if (studentCredits.at(moduleNumber) < 30)
		{
			srand(static_cast<unsigned int>(time(0)));
			randomNumber = rand() % 5 + 1;
			studentCredits.at(moduleNumber) = studentCredits.at(moduleNumber) + randomNumber;
			break;
		}

		else if (studentCredits[moduleNumber] >= 30)
		{
			std::cout << "You already got max credits!" << std::endl;
			break;
		}

		else
		{
			std::cout << "Error, could not add credits!" << std::endl;
			break;
		}

	}

}

void Undergrad::TotalCredits()
{
	std::cout << "Your Total Credits are:" << std::endl;
	std::cout << "Computer Gaming Hardware Architectures: " << studentCredits.at(1) << std::endl;
	std::cout << "Game Design and Development: " << studentCredits.at(2) << std::endl;
	std::cout << "Game Programming: " << studentCredits.at(3) << std::endl;
	std::cout << "Logic and Mathematical Techniques: " << studentCredits.at(4) << std::endl;
}
