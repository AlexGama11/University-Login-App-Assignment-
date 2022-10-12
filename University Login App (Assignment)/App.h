#pragma once
#include "Student.h"
#include "University.h"

class App
{

public:

	void MainScreen();

	void AppRun();

	bool Quit();



private:

	University uni;

	bool isUniOpen{ true };

	std::string answer;

};

