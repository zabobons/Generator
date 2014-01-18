#include <iostream>
#include "min.h"
#include "generator.h"

int main()
{	
	double * tab = generator();		//generacja
	print(tab);
	std::cout << "Min: " << min(tab) << ", Max: " << max(tab) << ", Suma: " << add(tab) << std::endl;

	return 0;
}
