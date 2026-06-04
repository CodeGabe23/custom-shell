#include <filesystem>
#include <iostream>
#include <string>

using namespace std;
using namespace std::filesystem;


// TODO: add flags functionality
void ls()
{
	path directoryPath = current_path();
	
	
	if (exists(directoryPath) && is_directory(directoryPath)) 
	{
		for (const auto& entry:
				directory_iterator(directoryPath))
		{
			string file = entry.path().filename();
			cout << file.substr(0, file.size())  << " ";
		}
	}


	std::cout << "\n";
}
