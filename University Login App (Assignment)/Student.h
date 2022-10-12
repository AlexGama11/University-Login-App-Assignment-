#pragma once
#include <iostream>
#include <string>

class Student
{

private:

	// Goes by module order, to find which credit is for which module do modulenumber - 1.
	float studentCredits[4] = {0, 0, 0, 0};

	enum class LineNumber
	{
		FirstLine,
		SecondLine,
		ThirdLine,
		FourthLine,
		FifthLine
	};

	struct StudentInfo
	{
		std::string studentName;
		std::string studentAddress;
		std::string studentID;
		std::string studentUsername;
		std::string studentPassword;
	};

	StudentInfo info;

public:
	int UniStudent();

	void Learn(int moduleNumber);

	void SetStudentVars(const std::string& var, int whatLine);

	void TotalCredits();
};

