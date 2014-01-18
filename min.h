double findMin(double * tab)
{
	enum { SIZE = 10};
	double min = tab[0];
	for ( i = 1; i < SIZE; i++)
		tab[i] = tab[i] < min ? tab[i] : min;
	return min;
}
		
