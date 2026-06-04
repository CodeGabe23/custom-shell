#include "rm.hpp"


void rm(std::string filename)
{
	// TODO: check if file exists,
	// 	 if it does then delete it,
	// 	 else output file not found
	
	std::filesystem::path currentPath = "";

	if (std::filesystem::exists(filename))
	{
		// TODO: error handling and validation
		std::filesystem::remove(filename);

	}
	else std::cout << "File " << filename << " not found.\n";


}
