#include <stdio.h>
#include <stdlib.h>

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

double min(double * tab)
{
	enum { SIZE = 10};
	double min = tab[0];
	int i;
	for ( i = 1; i < SIZE; i++)
		min = tab[i] < min ? tab[i] : min;
	return min;
}


double* generator()
{
	double *tab = (double*)malloc (sizeof(double) * 10);
	int i;
	for(i =0;i<10;i++)
	{
		tab[i] = rand() % 100;
	}
	return tab;
}	
