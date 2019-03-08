
int power(int base, int exp)
{
	int result = 1;

	if(exp == 0)
	{
		return 1;
	}
	while(exp>0)
	{
		result *= base;
		exp--;
	}

	return result;
}