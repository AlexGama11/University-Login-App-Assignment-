#include "App.h"

void App::MainScreen()
{
	uni.GetStudent().UniStudent();

	std::cout << "\nWould you like to attend a Lecture or finish your school year?" << std::endl;
	std::cin >> answer;

	uni.Check();

	if (answer == "ATTEND" || answer == "LECTURE")
	{
		uni.Lecture();
	}

	else if (answer == "FINISH" || answer == "QUIT")
	{
		std::cout << "Are you sure? Quitting will make you lose all your credits!" << std::endl;
		std::cin >> answer;

		uni.Check();

		if (answer == "Y" || answer == "YES")
		{
			std::cout << "\n" << std::endl;
			uni.GetStudent().TotalCredits();

		}

		else if (answer == "N" || answer == "NO")
		{
			std::cout << "Going back to the main screen!" << std::endl;
			isUniOpen = false;
		}
	}
}

void App::AppRun()
{
	uni.StartSchoolYear();

	while (isUniOpen)
	{
		MainScreen();
	}
}

bool App::Quit()
{
	isUniOpen = false ;
	return isUniOpen;
}
