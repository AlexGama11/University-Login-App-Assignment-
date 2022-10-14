#include "App.h"

void App::MainScreen()
{
	uni.GetStudent().UniStudent();

	std::cout << "\nWould you like to attend a Lecture or finish your school year?" << std::endl;
	std::cin.clear();
	std::cin >> appAnswer;

	uni.Check(appAnswer);

	if (appAnswer == "ATTEND" || appAnswer == "LECTURE")
	{
		uni.Lecture();
	}

	else if (appAnswer == "FINISH" || appAnswer == "QUIT")
	{
		std::cout << "Are you sure? Quitting will make you lose all your credits!" << std::endl;
		std::cin >> appAnswer;

		uni.Check(appAnswer);

		if (appAnswer == "Y" || appAnswer == "YES")
		{
			std::cout << "\n" << std::endl;
			uni.GetStudent().TotalCredits();
			Quit();
		}

		else if (appAnswer == "N" || appAnswer == "NO")
		{
			std::cout << "Going back to the main screen!" << std::endl;
		}
	}
}

int App::AppRun()
{
	uni.StartSchoolYear();

	while (isUniOpen)
	{
		MainScreen();
	}

	return 0;
}

void App::Quit()
{
	isUniOpen = false;
}
