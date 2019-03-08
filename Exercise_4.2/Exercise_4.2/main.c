#include "list.h";
#include <stdio.h>

int main()
{
	int item = 7;
	add_item(item);

	int result = get_item(0);
	printf("%d\n", result);
}