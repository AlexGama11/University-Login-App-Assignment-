#pragma once
#include "Student.h"

class Phd : public Student
{
public:

	virtual void Learn(int moduleNumber) override;

protected:
	enum class Modules
	{
		ArtificialIntelligence = 8,
		ArtificialIntelligenceforGames,
		CreativeTechnologyProject,
		NetworkingforGames,
		PrototypeDevelopment,
		ResearchRelatedLearning,
		WorkRelatedLearningforGamesandAnimation
	};

};