#include <iostream>
#include <string>

#include "TutorialConfig.h"

int main(int argc, char** argv)
{
	if( argc < 2)
	{
		std::cout << argv[0] << " Version" << Tutorial_VERSION_MAJOR << "."
		<<Tutorial_VERSION_MINOR << std::endl;
		std::cout <<"Usage: " << " number " << std::endl;
	}
	const double inputValue = std::stod(argv[1]);
	return 1;
}