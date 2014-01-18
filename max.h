double max(double * tab)
{
	enum {SIZE = 10};
	int i;
	double max =  tab[0];
	for (i = 1; i < SIZE; ++i)
		max = tab[i] > max ? tab[i] : max;

	return max;
}
