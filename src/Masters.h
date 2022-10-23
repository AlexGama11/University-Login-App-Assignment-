#pragma once
#include "Student.h"

class Masters : public Student
{
public:

	virtual void Learn(int moduleNumber) override;

	virtual void TotalCredits() override;

protected:

	enum class Modules
	{
		AdvancedCPPProgramming = 5,
		GraphicsAndShaderProgramming,
		GameEngineDevelopment,
		AugmentedToyDevelopment
	};

};