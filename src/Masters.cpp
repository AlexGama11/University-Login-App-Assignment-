#include "Masters.h"

void Masters::Learn(int moduleNumber)
{
	switch (Modules(moduleNumber))
	{

	case Modules::AdvancedCPPProgramming:
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

	case Modules::GraphicsAndShaderProgramming:
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

	case Modules::GameEngineDevelopment:
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

	case Modules::AugmentedToyDevelopment:
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