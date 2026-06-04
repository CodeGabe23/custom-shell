#include <iostream>
#include <filesystem>

std::uintmax_t rmdir(std::string dir)
{
	//TODO: check if directory exists
	//	delete if exists
	//	else output error
	

	if (std::filesystem::exists(dir))
	{
		std::uintmax_t filesDeleted = std::filesystem::remove_all(dir);
		return filesDeleted;
	}
	else std::cout << "Directory doesn't exist blud!\n";
	
	return 0;
}	
