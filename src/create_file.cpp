#include <iostream>
#include <string>
#include <linux/kernel.h>
#include <unistd.h>
#include <fcntl.h>

std::string create_file(std::string filename)
{
	// check if the file already exists
	if (access(filename.c_str(), F_OK) != -1) return "File already created.";
	
	// create the file
	open(filename.c_str(), O_CREAT);
	return "File created succesfully.";
}
