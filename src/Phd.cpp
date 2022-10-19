#include "Phd.h"

void Phd::Learn(int moduleNumber)
{
	switch (Modules(moduleNumber))
	{

	case Modules::ArtificialIntelligence:
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

	case Modules::ArtificialIntelligenceforGames:
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

	case Modules::CreativeTechnologyProject:
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

	case Modules::NetworkingforGames:
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

	case Modules::PrototypeDevelopment:
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

	case Modules::ResearchRelatedLearning:
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

	case Modules::WorkRelatedLearningforGamesandAnimation:
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