#include <stdio.h>


void print(double* tab)
{
	int i;
	for(i = 0;i<10;i++)
	{
		printf("%lf",tab[i]);
	}
}

double add(double* tab)
{
	int suma =0;
	int i;
	for(i =0; i<10;i++)
	{
		suma+=tab[i];
	}
	
	return suma;
}
