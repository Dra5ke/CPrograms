#include "multiSwap.h"

void multiSwap(int* x, int* y, int* z)
{
	int temp = *z;
	*z = *x;
	*x = *y;
	*y = temp;
}
