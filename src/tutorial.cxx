#include <iostream>
#include <string>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main(int argc, char** argv)
{
	if( argc < 2)
	{
		std::cout << argv[0] << " Version" << Tutorial_VERSION_MAJOR << "."
		<<Tutorial_VERSION_MINOR << std::endl;
		std::cout <<"Usage: " << " number " << std::endl;
	}
	//const double inputValue = std::stod(argv[1]);
	int inputValue = 9;
	#ifdef USE_MYMATH
	const double outputValue = mysqrt(inputValue);
	#else
	const double outputValue = sqrt(inputValue);
	#endif

	std::cout << "sqrt: " << outputValue << std::endl;
	return 1;
}