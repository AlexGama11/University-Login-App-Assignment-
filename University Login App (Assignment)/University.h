#pragma once
#include <string>
#include <fstream>

#include "Student.h"
#include "App.h"

class University
{

private:

	std::string name;
	std::string address;
	std::string id;
	std::string username;
	std::string password;
	
	std::string loginID;
	std::string loginUsername;
	std::string loginPassword;

	std::string answer;
	int answerInt;

	enum class Modules
	{
		AdvancedCPPProgramming = 1,
		GraphicsAndShaderProgramming,
		GameEngineDevelopment,
		AugmentedToyDevelopment
	};

	Student student;

	App app;

	std::string output;

public:

	void StartSchoolYear();

	void LoginSystem();

	void Lecture();

	void Check();

	void SaveStudentInfo(const std::string& name, const std::string address, const std::string id, const std::string username, const std::string password);

	void LoadStudentInfo(const std::string& userID, const std::string& userUsername);

	void SetVar(std::string& var, int readFrom, int line);

	bool CheckID(const std::string& checkID);

	bool CheckUsername(const std::string& checkUsername);

	bool CheckPassword(const std::string& checkPassword);

	Student GetStudent();

};

