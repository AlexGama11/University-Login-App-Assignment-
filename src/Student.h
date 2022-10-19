#pragma once
#include <iostream>
#include <string>
#include <vector>

class Student
{

protected:

	// Goes by module order, to find which credit is for which module do modulenumber - 1.
	int totalModules;
	std::vector<float> studentCredits[14];

	enum class LineNumber
	{
		FirstLine,
		SecondLine,
		ThirdLine,
		FourthLine,
		FifthLine,
		SixthLine
	};

	struct StudentInfo
	{
		std::string studentName;
		std::string studentAddress;
		std::string studentID;
		std::string studentUsername;
		std::string studentPassword;
		std::string studentDegree;
	};

	StudentInfo info;

public:

	int UniStudent();

	virtual void Learn(int moduleNumber) = 0;

	void SetStudentVars(const std::string& var, int whatLine);

	virtual void TotalCredits() = 0;
};

