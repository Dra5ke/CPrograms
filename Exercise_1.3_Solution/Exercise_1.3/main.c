#include <stdio.h> /* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	printf("Celsius to Fahrenheit conversion table\n\n");

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%6.0f\t%9.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	while (1);
}
