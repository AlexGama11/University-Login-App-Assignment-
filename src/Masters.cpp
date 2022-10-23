#include "Masters.h"

void Masters::Learn(int moduleNumber)
{
	switch (Modules(moduleNumber))
	{

	case Modules::AdvancedCPPProgramming:
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

	case Modules::GraphicsAndShaderProgramming:

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


	case Modules::GameEngineDevelopment:
		
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


	case Modules::AugmentedToyDevelopment:
		
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

void Masters::TotalCredits()
{
	std::cout << "Your Total Credits are:" << std::endl;
	std::cout << "Advanced CPP Programming: " << studentCredits.at(5) << std::endl;
	std::cout << "Graphics And Shader Programming: " << studentCredits.at(6) << std::endl;
	std::cout << "Game Engine Development: " << studentCredits.at(7) << std::endl;
	std::cout << "Augmented Toy Development: " << studentCredits.at(8) << std::endl;
}

