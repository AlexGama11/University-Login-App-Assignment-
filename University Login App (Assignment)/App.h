#pragma once
#include <string>
#include "University.h"

class App
{
private:

	University uni;

	bool isUniOpen{ true };

	std::string appAnswer;

public:

	void MainScreen();

	int AppRun();

	void Quit();

};

