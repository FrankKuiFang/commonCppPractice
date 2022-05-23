
#include <iostream>
#include <limits>

int test_numeric_limits()
{
	std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << std::endl;
	
	std::cout << "Minimum value for double: " << std::numeric_limits<double>::min() << std::endl;
	std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << std::endl;

	// People can use std::numeric_limits<double>::min() to ...
    
}