#include <fstream>
#include <sstream>
#include <vector>
#include "create_file.hpp"

int main()
{
	system("clear");

	// Get User Data
	system("mkdir .userdata");
	system("clear");

	system("whoami >> .userdata/username.txt");
	system("hostname >> .userdata/hostname.txt");
	system("pwd >> .userdata/currentDir.txt");

	// 'f' prefix is for file
	std::ifstream fuserName(".userdata/username.txt");
	std::ifstream fhostname(".userdata/hostname.txt");
	std::ifstream fcurrentDir(".userdata/currentDir.txt");
	
	std::string userName, hostName, currentDir;

	getline(fuserName, userName);
	fuserName.close();

	getline(fhostname, hostName);
	fhostname.close();

	getline(fcurrentDir, currentDir);
	fcurrentDir.close();
	
	std::cout << "Welcome, " << userName << "\n\n";

	
	std::string userInput{};

	while (true)
	{
		std::cout << "\033[32m" << userName << "@" << hostName << "\033[0m:";
		std::cout << "\033[34m" << currentDir << "\033[0m$ ";

		std::getline(std::cin, userInput);

		std::istringstream stream(userInput);
		std::string token {};

		std::vector<std::string> tokens;

		while (std::getline(stream, token, ' '))
		{
			// shant allow whitespaces as tokens
			if (token == "") continue;
			
			tokens.emplace_back(token);
		}


		for (auto token : tokens)
		{
			std::cout << token << std::endl;
		}

		
	//TODO: Parse input to see what the user wants to do	
	
		

	}


	return 0;
}

