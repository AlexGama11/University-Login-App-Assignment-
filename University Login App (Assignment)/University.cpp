#include "University.h"
#include <fstream>


void University::StartSchoolYear()
{
	std::cout << "Welcome to London Met!" << std::endl;
	LoginSystem();
}

void University::LoginSystem()
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
		std::getline(std::cin, id);

		std::cout << "What's your Address?" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, address);
		//std::cin >> address;

		std::cout << "Choose your Username!" << std::endl;
		std::getline(std::cin, username);

		std::cout << "Finally, set your password!" << std::endl;
		std::getline(std::cin, password);

		SaveStudentInfo(name, address, id, username, password);

		std::cout << "Thank you, you are now registered!" << std::endl;
	}

	else if (answer == "LOGIN")
	{
		std::cout << "What's your Student ID?" << std::endl;
		std::cin >> loginID;

		std::cout << "What's your Username?" << std::endl;
		std::cin >> loginUsername;



		LoadStudentInfo(loginID, loginUsername);

		if (CheckID(loginID) && CheckUsername(loginUsername))
		{
			std::cout << "Please, input your password!" << std::endl;
			std::cin >> loginPassword;

			if (CheckPassword(loginPassword))
			{
				std::cout << "Login Successful! Welcome " << loginUsername << "!" << std::endl;
			}

			else
			{
				std::cout << "Wrong Password, Login Unsuccessful!" << std::endl;
				LoginSystem();
			}
		}

	}

	else
	{
		std::cout << "Please write either 'Register' or 'Login'!" << std::endl;
		LoginSystem();
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

void University::SaveStudentInfo(const std::string& name, const std::string address, const std::string id, const std::string username, const std::string password)
{
	auto save = "Name: " + name + "\n" + "Address: " + address + "\n" + "ID: " + id + "\n" + "Username: " + username + "\n" + "Password: " + password;
	auto fileName = id + " - " + username;

	const int maxLines = 5;
	for (int line = 0; line < maxLines; line++)
	{
		if (line == 0)
		{
			//Set Student variable in the student class.
			student.SetStudentVars(name, line);
		}

		else if (line == 1)
		{
			student.SetStudentVars(address, line);
		}

		else if (line == 2)
		{
			student.SetStudentVars(id, line);
		}

		else if (line == 3)
		{
			student.SetStudentVars(username, line);
		}

		else if (line == 4)
		{
			student.SetStudentVars(password, line);
		}

		else
		{
			std::cout << "Error! Forloop is not working!" << std::endl;
		}
	}

	std::string filePath = "../SavedInfo/" + fileName + ".txt";

	std::ofstream saveFile(filePath);

	saveFile << save;

	saveFile.close();
}

void University::LoadStudentInfo(const std::string& userID, const std::string& userUsername)
{
	std::string fileName = userID + " - " + userUsername;

	std::string filePath = "../SavedInfo/" + fileName + ".txt";

	std::ifstream saveFile(filePath);

	if (!saveFile)
	{
		std::cout << "We don't have you on the records, please register or contact an admin!" << std::endl;
		app.Quit();
	}

	else
	{
		const int maxLines = 5;
		for (int line = 0; line < maxLines; line++)
		{
			std::getline(saveFile, output);

			if (line == 0)
			{
				//code to read from a certain character onwards.
				SetVar(name, 6, line);
			}

			else if (line == 1)
			{
				SetVar(address, 9, line);
			}

			else if (line == 2)
			{
				SetVar(id, 4, line);
			}

			else if (line == 3)
			{
				SetVar(username, 10, line);
			}
			
			else if (line == 4)
			{
				SetVar(password, 10, line);
			}

			else
			{
				std::cout << "Error! Forloop is not working!" << std::endl;
			}

		}
	}

	saveFile.close();
}

void University::SetVar(std::string& var, int readFrom, int line)
{
	var = output.substr(readFrom);
	student.SetStudentVars(var, line);
}

bool University::CheckID(const std::string& checkID)
{
	return (checkID == id);
}

bool University::CheckUsername(const std::string& checkUsername)
{
	return (checkUsername == username);
}

bool University::CheckPassword(const std::string& checkPassword)
{
	return (checkPassword == password);
}

Student University::GetStudent()
{
	return student;
}
