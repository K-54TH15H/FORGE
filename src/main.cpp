#include <iostream>
#include <cstring>
#include <fstream>

int main(int argc,char* argv[])
{
	//Help Section
	if(argc == 2 && (!strcmp(argv[1],"-h") || !strcmp(argv[1],"--help")))
	{
		std::cout << ">>> HELP SECTION <<<" << std::endl;
		std::cout << "--- no functionality ---" << std::endl;
	}
	else
	{
		std::ifstream forgeFile("ForgeFile");

		if(forgeFile.is_open())
		{
			std::cout << "ForgeFile found ---> Compilation to be started" << std::endl;
		}
		else
		{
			std::cout << "ForgeFile not found ---> Exiting with Error Code 00" << std::endl;
			throw 00;
		}
	}
}
