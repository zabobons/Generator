double min(double * tab)
{
	enum { SIZE = 10};
	double min = tab[0];
	int i;
	for ( i = 1; i < SIZE; i++)
		min = tab[i] < min ? tab[i] : min;
	return min;
}
		
