#include "University.h"
#include <fstream>


void University::RegisterStudent(Student& student)
{
	std::cout << "Would you like to Register or Login?" << std::endl;
	std::cin >> answer;

	Check();

	if (answer == "REGISTER")
	{
		std::cout << "What's your Name?" << std::endl;
		std::getline(std::cin, name);
		//std::cin >> name;

		std::cout << "What's your Student ID?" << std::endl;
		std::cin >> id;

		std::cout << "What's your Address?" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, address);
		//std::cin >> address;

		std::cout << "Choose your Username!" << std::endl;
		std::cin >> username;

		std::cout << "Finally, set your password!" << std::endl;
		std::cin >> password;

		records.SaveStudentInfo(name, address, id, username, password);

		std::cout << "Thank you, you are now registered!" << std::endl;
		MainScreen();
	}

	else if (answer == "LOGIN")
	{
		std::cout << "What's your Student ID?" << std::endl;
		std::cin >> id;

		std::cout << "What's your Username?" << std::endl;
		std::cin >> username;



		records.LoadStudentInfo(id, username);

		if (records.CheckID(id) && records.CheckUsername(username))
		{
			std::cout << "Please, input your password!" << std::endl;
			std::cin >> password;

			if (records.CheckPassword(password))
			{
				std::cout << "Login Successful! Welcome " << username << "!" << std::endl;
				MainScreen();
			}

			else
			{
				std::cout << "Wrong Password, Login Unsuccessful!" << std::endl;

				std::cout << "\x1B[2J\x1B[H";
			}
		}

	}

	else
	{
		std::cout << "Please write either 'Register' or 'Login'!" << std::endl;

		std::cout << "\x1B[2J\x1B[H";
	}
}

void University::MainScreen()
{
	student.UniStudent();

	std::cout << "Would you like to attend a Lecture or finish your school year?" << std::endl;
	std::cin >> answer;

	Check();

	if (answer == "ATTEND" || answer == "LECTURE")
	{
		Lecture();
	}

	else if (answer == "FINISH" || answer == "QUIT")
	{
		std::cout << "Are you sure? Quitting will make you lose all your credits!" << std::endl;
		std::cin >> answer;

		Check();

		if (answer == "Y" || answer == "YES")
		{
			std::cout << "Your Total Credits are:" << std::endl;
			std::cout << "Advanced C++ Programming: " << student.GetCreditsOne() << std::endl;
			std::cout << "Graphics And Shader Programming:" << student.GetCreditsTwo() << std::endl;
			std::cout << "Game Engine Development: " << student.GetCreditsThree() << std::endl;
			std::cout << "Augmented Toy Development: " << student.GetCreditsFour() << std::endl;

			isAppRunning = false;
		}

		else if (answer == "N" || answer == "NO")
		{
			std::cout << "Going back to the main screen!" << std::endl;
		}
	}
}


void University::Lecture()
{
	std::cout << "Choose which module to learn from!" << std::endl;

	std::cout << "AdvancedCPPProgramming = 1, GraphicsAndShaderProgramming = 2, GameEngineDevelopment = 3, AugmentedToyDevelopment = 4" << std::endl;

	std::cin >> answerInt;

	switch (Modules(answerInt))
	{

		case Modules::AdvancedCPPProgramming:

			student.Learn(1);
			break;

		case Modules::GraphicsAndShaderProgramming:

			student.Learn(2);
			break;

		case Modules::GameEngineDevelopment:

			student.Learn(3);
			break;

		case Modules::AugmentedToyDevelopment:

			student.Learn(4);
			break;

		default:

			std::cout << "It seems you are not registered for that module, please choose a valid module!" << std::endl;
			break;
	}

	MainScreen();
}

bool University::IsAppRunning()
{
	return isAppRunning;
}

void University::Check()
{
	std::cin.get();
	while (std::cin.fail())
	{
		std::cout << "Please write a valid answer!" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> answer;
	}

	//For Loop to convert each character to uppercase, making my check later be case insensitive.
	for (int i = 0; i < answer.size(); i++)
	{
		answer.at(i) = toupper(answer.at(i));
	}
}
