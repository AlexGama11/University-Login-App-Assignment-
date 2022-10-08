#pragma once
#include <iostream>
#include <string>

class Student
{

private:

	int credits;

	struct ID
	{
		int number;
		std::string name;
		std::string address;
		std::string password;
		std::string username;
	};

	ID id;

public:
	int UniStudent(ID id);

	void GetID(int studentID);

	void SetId(int& studentID);

	void GetName(std::string studentName);

	void SetName(std::string& studentName);

	void GetAddress(std::string studentAddress);

	void SetAddress(std::string& studentAddress);

	void GetPassword(std::string studentPassword);

	void SetPassword(std::string& studentPassword);

	void GetUsername(std::string studentUsername);

	void SetUsername(std::string& studentUsername);

	void Learn();


};

