#pragma once
#include "Student.h"

class Phd : public Student
{
public:

	virtual void Learn(int moduleNumber) override;

	virtual void TotalCredits() override;

protected:
	enum class Modules
	{
		ArtificialIntelligence = 9,
		ArtificialIntelligenceforGames,
		CreativeTechnologyProject,
		NetworkingforGames,
		PrototypeDevelopment,
		ResearchRelatedLearning,
		WorkRelatedLearningforGamesandAnimation
	};

};