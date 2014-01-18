#include <stdlib.h>

double* generator()
{
	double tab[10] = {0};
	double *wsk = tab;
	int i;
	for(i =0;i<10;i++)
	{
		tab[i] = rand() % 100;
	}
	return wsk;
}
