#pragma once
#include "Student.h"

class Masters : public Student
{
public:

	virtual void Learn(int moduleNumber) override;

protected:
	enum class Modules
	{
		AdvancedCPPProgramming = 4,
		GraphicsAndShaderProgramming,
		GameEngineDevelopment,
		AugmentedToyDevelopment
	};

};