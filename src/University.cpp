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

	Check(answer);

	if (answer == "REGISTER")
	{
		std::cout << "What's your Name?" << std::endl;
		std::getline(std::cin, name);
		//std::cin >> name;

		std::cout << "What's your Student ID?" << std::endl;
		std::getline(std::cin, id);

		std::cout << "What's your Address?" << std::endl;
		std::getline(std::cin, address);
		//std::cin >> address;

		std::cout << "Are you an studying in an Undergrad course, Masters course or for a Phd?" << std::endl;
		std::cin >> courseType;
		Check(courseType);

		while (courseType != "UNDERGRAD" && courseType != "UNDERGRADUATE" && courseType != "MASTERS" && courseType != "PHD" && courseType != "DOCTORATE")
		{
			std::cout << "Option not recognized, please retry..." << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> courseType;
			Check(courseType);
		}
	
		DefineStudentType(courseType);

		std::cout << "Choose your Username!" << std::endl;
		std::getline(std::cin, username);

		std::cout << "Finally, set your password!" << std::endl;
		std::getline(std::cin, password);

		SaveStudentInfo(name, address, id, username, password, courseType);

		std::cout << "Thank you, you are now registered!" << std::endl;
	}

	else if (answer == "LOGIN")
	{
		std::cout << "What's your Student ID?" << std::endl;
		std::cin >> loginID;

		std::cout << "What's your Username?" << std::endl;
		std::cin >> loginUsername;

		std::cout << "What's your Degree Level?" << std::endl;
		std::cin >> courseType;
		Check(courseType);

		while (courseType != "UNDERGRAD" && courseType != "UNDERGRADUATE" && courseType != "MASTERS" && courseType != "PHD" && courseType != "DOCTORATE")
		{
			std::cout << "Option not recognized, please retry..." << std::endl;
			std::cin.clear();
			std::cin >> courseType;
			Check(courseType);
		}

		DefineStudentType(courseType);

		LoadStudentInfo(loginID, loginUsername);

		if (CheckID(loginID) && CheckUsername(loginUsername) && CheckDegreeType(courseType))
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

Student* University::DefineStudentType(const std::string& degree)
{
	if (degree == "UNDERGRAD" || degree == "UNDERGRADUATE")
	{
		student = new Undergrad();
		return student;
	}
	
	else if (degree == "MASTERS")
	{
		student = new Masters();
		return student;
	}

	else if (degree == "PHD" || degree == "DOCTORATE")
	{
		student = new Phd();
		return student;
	}

	else
	{
		std::cout << "Error, couldn't define student type!" << std::endl;
		return 0;
	}
}

void University::Lecture(const std::string& degree)
{
	if (degree == "UNDERGRAD" || degree == "UNDERGRADUATE")
	{
		std::cout << "Choose which module to learn from!" << std::endl;

		std::cout << "Computer Gaming Hardware Architectures = 1;\nGame Design and Development = 2;\nGame Programming = 3;\nLogic and Mathematical Techniques = 4." << std::endl;

		std::cin >> answerInt;

		if (answerInt > 4 || answerInt < 0)
		{
			std::cout << "Please write a valid answer!" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> answerInt;
		}

		else
		{
			student->Learn(answerInt);

			student->TotalCredits();
		}
		
	}

	else if (degree == "MASTERS")
	{
		std::cout << "Choose which module to learn from!" << std::endl;

		std::cout << "Advanced CPP Programming = 5;\nGraphics And Shader Programming = 6;\nGame Engine Development = 7;\nAugmented Toy Development = 8." << std::endl;

		std::cin >> answerInt;

		if (answerInt > 8 || answerInt < 5)
		{
			std::cout << "Please write a valid answer!" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> answerInt;
		}

		else
		{
			student->Learn(answerInt);
			student->TotalCredits();
		}
	}

	else if (degree == "PHD" || degree == "DOCTORATE")
	{
		std::cout << "Choose which module to learn from!" << std::endl;

		std::cout << "Artificial Intelligence = 9;\nArtificial Intelligence for Games = 10;\nCreative Technology Project = 11;\nNetworking for Games = 12;\nPrototype Development = 13;\nResearch Related Learning = 14;\nWork Related Learning for Games and Animation = 15." << std::endl;

		std::cin >> answerInt;

		if (answerInt < 9 || answerInt > 15)
		{
			std::cout << "Please write a valid answer!" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> answerInt;
		}

		else
		{
			student->Learn(answerInt);
			student->TotalCredits();
		}
	}

	else
	{
		std::cout << "Error, couldn't get your grades!" << std::endl;
	}

	student->Advance(courseType);

}

void University::Check(std::string& answerCheck)
{
	std::cin.get();
	while (std::cin.fail())
	{
		std::cout << "Please write a valid answer!" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> answerCheck;
	}

	//For Loop to convert each character to uppercase, making my check later be case insensitive.
	for (int i = 0; i < answerCheck.size(); i++)
	{
		answerCheck.at(i) = toupper(answerCheck.at(i));
	}
}

void University::SaveStudentInfo(const std::string& name, const std::string& address, const std::string& id, const std::string& username, const std::string& password, const std::string& degree)
{
	auto save = "Name: " + name + "\n" + "Address: " + address + "\n" + "ID: " + id + "\n" + "Username: " + username + "\n" + "Password: " + password + "\n" + "Degree Type: " + degree;
	auto fileName = id + " - " + username;

	const int maxLines = 6;
	for (int line = 0; line < maxLines; line++)
	{
		if (line == 0)
		{
			//Set Student variable in the student class.
			student->SetStudentVars(name, line);
		}

		else if (line == 1)
		{
			student->SetStudentVars(address, line);
		}

		else if (line == 2)
		{
			student->SetStudentVars(id, line);
		}

		else if (line == 3)
		{
			student->SetStudentVars(username, line);
		}

		else if (line == 4)
		{
			student->SetStudentVars(password, line);
		}

		else if (line == 5)
		{
			student->SetStudentVars(degree, line);
		}

		else
		{
			std::cout << "Error! Forloop is not working!" << std::endl;
		}
	}

	std::string filePath = "./SavedInfo/" + fileName + ".txt";

	std::ofstream saveFile(filePath);

	saveFile << save;

	saveFile.close();
}

void University::LoadStudentInfo(const std::string& userID, const std::string& userUsername)
{
	std::string fileName = userID + " - " + userUsername;

	std::string filePath = "./SavedInfo/" + fileName + ".txt";

	std::ifstream saveFile(filePath);

	if (!saveFile)
	{
		std::cout << "We don't have you on the records, please register or contact an admin!" << std::endl;
	}

	else
	{
		const int maxLines = 6;
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

			else if (line == 5)
			{
				SetVar(courseType, 13, line);
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
	student->SetStudentVars(var, line);
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

bool University::CheckDegreeType(const std::string& checkDegree)
{
	return (checkDegree == courseType);
}

Student* University::GetStudent()
{
	return student;
}

std::string University::GetDegreeType()
{
	return courseType;
}
