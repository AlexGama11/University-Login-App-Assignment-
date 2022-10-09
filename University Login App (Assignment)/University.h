#pragma once
#include "Student.h"
#include "Records.h"

class University
{

private:
	std::string name;
	std::string address;
	std::string id;
	std::string username;
	std::string password;

	std::string answer;
	int answerInt;

	bool isAppRunning = true;

	enum class Modules
	{
		AdvancedCPPProgramming = 1,
		GraphicsAndShaderProgramming,
		GameEngineDevelopment,
		AugmentedToyDevelopment
	};

	Student student;
	Records records;

public:

	void RegisterStudent(Student& UniStudent);

	void MainScreen();

	void Lecture();

	bool IsAppRunning();

	void Check();

};

