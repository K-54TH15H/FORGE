#include <iostream>
#include <cstring>

int main(int argc,char* argv[])
{
	if(argc == 2 && (!strcmp(argv[1],"-h") || !strcmp(argv[1],"--help")))
	{
		std::cout << ">>> HELP SECTION <<<" << std::endl;
		std::cout << "--- no functionality ---" << std::endl;
	}
}
