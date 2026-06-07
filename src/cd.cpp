#include "cd.hpp"


void cd(std::string location)
{
	// TODO: use the location parameter to change directory
	std::filesystem::current_path(location);	
}
