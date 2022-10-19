#pragma once
#include <string>
#include <fstream>
#include "Student.h"
#include "StudentTypes.h"

class University
{

private:

	std::string name;
	std::string address;
	std::string id;
	std::string username;
	std::string password;
	std::string courseType;
	
	std::string loginID;
	std::string loginUsername;
	std::string loginPassword;

	std::string answer;
	int answerInt;

	std::string output;

	Student* student{ nullptr };

public:

	void StartSchoolYear();

	void LoginSystem();
	
	Student* DefineStudentType(const std::string& degree);

	void Lecture();

	void Check(std::string& answerCheck);

	void SaveStudentInfo(const std::string& name, const std::string& address, const std::string& id, const std::string& username, const std::string& password, const std::string& degree);

	void LoadStudentInfo(const std::string& userID, const std::string& userUsername);

	void SetVar(std::string& var, int readFrom, int line);

	bool CheckID(const std::string& checkID);

	bool CheckUsername(const std::string& checkUsername);

	bool CheckPassword(const std::string& checkPassword);

	Student* GetStudent();

};

