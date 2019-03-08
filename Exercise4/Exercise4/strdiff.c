#include "strdiff.h"

int str_diff(char* a, char* b)
{
	int i = 0;
	while(a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] != b[i])
			return i;
		i++;
	}
	return -1;
}
