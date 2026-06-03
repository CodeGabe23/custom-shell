#include <filesystem>
#include <iostream>
#include <string>

// TODO: fix
using fs = std::filesystem;

// TODO: complete

// TODO: add flags functionality
void ls()
{
	path directoryPath = "";

	for (const auto& entry : directory_iterator(directoryPath))
	{
		std::cout << entry.filename() << "\n";
	}
}
