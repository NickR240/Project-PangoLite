#include "Game.h";
#include "Player.h";
#include <iostream>;
#include <windows.h>

void initializeGame() 
{
	int selection;

	generateMainMenu();
	optionSelection(selection);

};
void generateMainMenu() 
{
	//Needed to putput UTF-8 characters in the console.
	SetConsoleOutputCP(CP_UTF8);

	std::cout << "                                                                        \n";
	std::cout << " ██████╗  █████╗ ███╗   ██╗ ██████╗  ██████╗ ██╗     ██╗████████╗███████╗\n";
	std::cout << " ██╔══██╗██╔══██╗████╗  ██║██╔════╝ ██╔═══██╗██║     ██║╚══██╔══╝██╔════╝\n";
	std::cout << " ██║  ██║██║  ██║██╔██╗ ██║██║  ███╗██║   ██║██║     ██║   ██║   █████╗  \n";
	std::cout << " ██████╔╝███████║██║╚██╗██║██║   ██║██║   ██║██║     ██║   ██║   ██╔══╝  \n";
	std::cout << " ██╔═══╝ ██╔══██║██║ ╚████║██║   ██║██║   ██║██║     ██║   ██║   ██║     \n";
	std::cout << " ██║     ██║  ██║██║  ╚███║╚██████╔╝╚██████╔╝███████╗██║   ██║   ███████╗\n";
	std::cout << " ╚═╝     ╚═╝  ╚═╝╚═╝   ╚══╝ ╚═════╝  ╚═════╝ ╚══════╝╚═╝   ╚═╝   ╚══════╝\n";
	std::cout << "                                                                         \n";
	std::cout << "                     ================================                    \n";
	std::cout << "                         WELCOME TO PANGOLITE                            \n";
	std::cout << "                     ================================                    \n";
	std::cout << "                                                                         \n";
	std::cout << "                           1. Start New Game                             \n";
	std::cout << "                             2. Load Game                                \n";
	std::cout << "                               3. Exit                                   \n" << std::endl;

};

void characterCreator() 
{
	std::string name;
	clearScreen();
	std::cout << "Enter your character's name: ";
	std::getline(std::cin, name);

	// Additional character creation logic would go here
}

void startNewGame() 
{
	std::cout << "Starting a new game..." << std::endl;
	characterCreator();
	
	// Additional game setup and logic would go here
};

void loadGame() 
{
	std::cout << "[Lorem Ipsum" << std::endl;
	// Game loading logic would go here
};

void exitGame() 
{
	// Game Exit: Clean up resources, save progress, etc.
	std::cout << "Exiting the game. Goodbye!" << std::endl;
	exit(0);
};

void optionSelection(int& selection)
{
	// Keep asking until the user enters a valid option.
	while (true)
	{
		std::cout << "Please select an option: ";
		std::cin >> selection;

		// cin.fail() becomes true when the input could not be stored
		if (std::cin.fail())
		{
			// Clear cin's error state.
			// cin cannot accept more input until this is done.
			std::cin.clear();

			// Remove the invalid input still remaining in the input buffer.
			// This ignores everything up to and including the Enter key.
			std::cin.ignore((std::numeric_limits<std::streamsize>::max)(),'\n');

			std::cout << "Invalid input. Please enter a number.\n";
		}
		// The input was an integer, but it is outside the allowed range.
		else if (selection < 1 || selection > 3)
		{
			std::cin.ignore((std::numeric_limits<std::streamsize>::max)(),'\n');

			std::cout << "Number must be between 1 and 3.\n";
		}
		else
		{
			// Remove the newline character left behind after the user
			std::cin.ignore((std::numeric_limits<std::streamsize>::max)(),'\n');

			break;
		}
	}
	//Testing selection handling.
	switch (selection) {
		case 1:
			startNewGame();
			break;
		case 2:
			loadGame();
			break;
		case 3:
			exitGame();
			break;
	}
}
void clearScreen()
{
	std::cout << "\x1B[2J\x1B[H";
}