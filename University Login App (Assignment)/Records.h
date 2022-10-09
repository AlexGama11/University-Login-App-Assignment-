#pragma once
#include <iostream>
#include <string>
#include <fstream>


class Records
{

private:

	std::string idVar;
	std::string usernameVar;
	std::string nameVar;
	std::string addressVar;
	std::string passwordVar;

	std::string output;
	std::string* varPointer;

	std::string studentInfo[5] = { nameVar, addressVar, idVar, usernameVar, passwordVar };

public:

	void SaveStudentInfo(std::string name, std::string address, std::string id, std::string username, std::string password);

	void LoadStudentInfo(std::string id, std::string username);

	bool CheckID(std::string id);

	bool CheckUsername(std::string username);

	bool CheckPassword(std::string password);

	const std::string GetID();

	const std::string GetUsername();
	
	const std::string GetName();

	const std::string GetAddress();

	void SetVar(std::string& var, int readFrom);
};

