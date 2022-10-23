#include "Phd.h"

void Phd::Learn(int moduleNumber)
{
	switch (Modules(moduleNumber))
	{

	case Modules::ArtificialIntelligence:
		
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


	case Modules::ArtificialIntelligenceforGames:
		
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


	case Modules::CreativeTechnologyProject:
		
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


	case Modules::NetworkingforGames:
		
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


	case Modules::PrototypeDevelopment:
		
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


	case Modules::ResearchRelatedLearning:
		
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


	case Modules::WorkRelatedLearningforGamesandAnimation:
		
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

void Phd::TotalCredits()
{
	std::cout << "Your Total Credits are:" << std::endl;
	std::cout << "Artificial Intelligence: " << studentCredits.at(9) << std::endl;
	std::cout << "Artificial Intelligence for Games: " << studentCredits.at(10) << std::endl;
	std::cout << "Creative Technology Project: " << studentCredits.at(11) << std::endl;
	std::cout << "Networking for Games: " << studentCredits.at(12) << std::endl;
	std::cout << "Prototype Development: " << studentCredits.at(13) << std::endl;
	std::cout << "Research Related Learning: " << studentCredits.at(14) << std::endl;
	std::cout << "Work Related Learning for Games and Animation: " << studentCredits.at(15) << std::endl;
}
