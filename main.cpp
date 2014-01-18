#include <iostream>
#include "min.h"
#include "generator.h"

int main()
{
	std::cout << min(generator());
	std::cout << "To jest funkcja main\n";
	return 0;
}
