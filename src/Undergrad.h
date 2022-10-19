#pragma once
#include "Student.h"

class Undergrad : public Student
{
public:
	virtual void Learn(int moduleNumber) override;

	virtual void TotalCredits() override;
	
protected:
	enum class Modules
	{
		ComputerGamingHardwareArchitectures,
		GameDesignandDevelopment,
		GameProgramming,
		LogicandMathematicalTechniques
	};

};