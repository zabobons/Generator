#include <iostream>
#include "max.h"
#include "utils.h"

int main()
{	
	double * tab = generator();		//generacja
	print(tab);
	std::cout << "Min: " << min(tab) << ", Max: " << max(tab) << ", Suma: " << add(tab) << std::endl;

	return 0;
}
