#pragma once
#include "Student.h"

class University
{

private:
	std::string name;
	std::string address;
	std::string id;
	std::string username;
	std::string password;

	std::string idVar;
	std::string usernameVar;
	std::string nameVar;
	std::string addressVar;
	std::string passwordVar;

	std::string output;

	std::string answer;
	int answerInt;

	enum class Modules
	{
		AdvancedCPPProgramming = 1,
		GraphicsAndShaderProgramming,
		GameEngineDevelopment,
		AugmentedToyDevelopment
	};



public:

	void RegisterStudent(Student& UniStudent);

	void Lecture();

	void SaveStudentInfo(std::string name, std::string address, std::string id, std::string username, std::string password);

	void LoadStudentInfo(std::string id, std::string username);

};

