#include "create_file.hpp"

std::string create_file()
{
	system("cls");

	std::string filename {};

	std::cout << "Enter the filename: ";
	std::getline(std::cin, filename);

	// check if the file already exists
	if (access(filename.c_str(), F_OK) != -1) return "File already created.";
	
	// create the file
	open(filename.c_str(), O_CREAT);
	return "File created succesfully.";
}
