#include "University.h"
#include <fstream>


void University::RegisterStudent(Student& student)
{
	std::cout << "Would you like to Register or Login?" << std::endl;
	std::cin >> answer;

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

	if (answer == "REGISTER")
	{
		std::cout << "What's your Name?" << std::endl;
		std::getline(std::cin, name);
		//std::cin >> name;
		student.SetName(name);

		std::cout << "What's your Student ID?" << std::endl;
		std::cin >> id;
		int idNumber = std::stoi(id);
		student.SetId(idNumber);

		std::cout << "What's your Address?" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, address);
		//std::cin >> address;
		student.SetAddress(address);

		std::cout << "Choose your Username!" << std::endl;
		std::cin >> username;
		student.SetUsername(username);

		std::cout << "Finally, set your password!" << std::endl;
		std::cin >> password;
		student.SetPassword(password);

		SaveStudentInfo(name, address, id, username, password);
	}

	else if (answer == "LOGIN")
	{
		std::cout << "What's your Student ID?" << std::endl;
		std::cin >> id;

		std::cout << "What's your Username?" << std::endl;
		std::cin >> username;

		LoadStudentInfo(id, username);

		if (id == idVar && username == usernameVar)
		{
			std::cout << "Please, input your password!" << std::endl;
			std::cin >> password;

			if (password == passwordVar)
			{
				std::cout << "Login Successful!" << std::endl;
			}

			else
			{
				std::cout << "Wrong Password, Login Unsuccessful!" << std::endl;
			}
		}


	}

	else
	{
		std::cout << "Please write either 'Register' or 'Login'!" << std::endl;
	}
}


void University::Lecture()
{
}

void University::SaveStudentInfo(std::string name, std::string address, std::string ID, std::string username, std::string password)
{
	std::string save = "Name: " + name + "\n" + "Address: " + address + "\n" + "ID: " + ID + "\n" + "Username: " + username + "\n" + "Password: " + password;
	std::string fileName = ID + " - " + username;

	std::string filePath = "../SavedInfo/" + fileName + ".txt";

	std::ofstream saveFile(filePath);

	saveFile << save;

	saveFile.close();
}

void University::LoadStudentInfo(std::string ID, std::string username)
{
	std::string fileName = ID + " - " + username;

	std::string filePath = "../SavedInfo/" + fileName + ".txt";

	std::ifstream saveFile(filePath);

	if (!saveFile)
	{
		std::cout << "We don't have you on the records, please register or contact an admin!" << std::endl;
	}

	else
	{

		for (int i = 0; i < 6; i++)
		{
			std::getline(saveFile, output);

			if (i == 1)
			{
				//code to read from a certain character onwards.
				nameVar = output.substr(6);
			}

			if (i == 2)
			{
				addressVar = output.substr(9);
			}

			if (i == 3)
			{
				idVar = output.substr(5);
			}

			if (i == 4)
			{
				usernameVar = output.substr(10);
			}

			if (i == 5)
			{
				passwordVar = output.substr(10);
			}

		}
	}

	saveFile.close();
}