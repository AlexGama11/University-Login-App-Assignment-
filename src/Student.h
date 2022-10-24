#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<cstdlib>
#include <ctime>

class Student
{

protected:

	// Goes by module order, to find which credit is for which module do modulenumber - 1.
	int totalModules;

	std::vector<float> studentCredits = std::vector<float> (15, 0);

	int randomNumber;

	int totalCredits;

	enum class LineNumber
	{
		FirstLine,
		SecondLine,
		ThirdLine,
		FourthLine,
		FifthLine,
		SixthLine
	};

	enum class MaxCredits
	{
		FirstYear = 120,
		SecondYear = 120,
		ThirdYear = 210
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

	std::string Advance(std::string& degree);
};

