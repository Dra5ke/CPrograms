#include "my_strlen.h"
int my_strlen(char* a)
{
	int i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	return i;
}
