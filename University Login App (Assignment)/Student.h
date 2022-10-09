#pragma once
#include <iostream>
#include <string>
#include "Records.h"

class Student
{

private:

	int studentCredits[4] = {0, 0, 0, 0};

	std::string studentName;
	std::string studentAddress;
	std::string studentID;
	std::string studentUsername;
	std::string studentPassword;

	Records records;

public:
	int UniStudent();

	void Learn(int moduleNumber);

	int GetCreditsOne();

	int GetCreditsTwo();

	int GetCreditsThree();

	int GetCreditsFour();
};

