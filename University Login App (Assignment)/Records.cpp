#include "Records.h"

void Records::SaveStudentInfo(std::string name, std::string address, std::string id, std::string username, std::string password)
{
	std::string save = "Name: " + name + "\n" + "Address: " + address + "\n" + "ID: " + id + "\n" + "Username: " + username + "\n" + "Password: " + password;
	std::string fileName = id + " - " + username;

	std::string filePath = "../SavedInfo/" + fileName + ".txt";

	std::ofstream saveFile(filePath);

	saveFile << save;

	saveFile.close();
}

void Records::LoadStudentInfo(std::string id, std::string username)
{
	std::string fileName = id + " - " + username;

	std::string filePath = "../SavedInfo/" + fileName + ".txt";

	std::ifstream saveFile(filePath);

	if (!saveFile)
	{
		std::cout << "We don't have you on the records, please register or contact an admin!" << std::endl;
	}

	else
	{

		for (int i = 0; i < 5; i++)
		{
			std::getline(saveFile, output);

			if (i == 0)
			{
				//code to read from a certain character onwards.
				SetVar(nameVar, 6);
			}

			else if (i == 1)
			{
				SetVar(addressVar, 9);
			}

			else if (i == 2)
			{
				SetVar(idVar, 4);
			}

			else if (i == 3)
			{
				SetVar(usernameVar, 10);
			}

			else if (i == 4)
			{
				SetVar(passwordVar, 10);
			}

		}
	}

	saveFile.close();
}

bool Records::CheckID(std::string id)
{
	if (id == idVar)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool Records::CheckUsername(std::string username)
{
	if (username == usernameVar)
	{
		return true;
	}
	
	else
	{
		return false;
	}
}

bool Records::CheckPassword(std::string password)
{
	if (password == passwordVar)
	{
		return true;
	}
	
	else
	{
		return false;
	}
}

const std::string Records::GetID()
{
	return idVar;
}

const std::string Records::GetUsername()
{
	return usernameVar;
}

const std::string Records::GetName()
{
	return nameVar;
}

const std::string Records::GetAddress()
{
	return addressVar;
}

void Records::SetVar(std::string& var, int readFrom)
{
	varPointer = &var;
	*varPointer = output.substr(readFrom);
}