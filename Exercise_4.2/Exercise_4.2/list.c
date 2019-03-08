#include "list.h"
#include <stdint.h>
#include <stdlib.h>

typedef struct node* node_ptr_t;

typedef struct node {
	int item;
	node_ptr_t next;
} node_t;

node_ptr_t head = NULL;
int count = 0;

int add_item(int item)
{
	if(head == NULL)
	{ 
		head = (node_ptr_t) malloc(sizeof(node_t));
		head->next = NULL;
		head->item = item;
		count++;
		return 0;
	}
	else
	{
		node_ptr_t current = head;
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = malloc(sizeof(node_t));
		current->next->item = item;
		current->next->next = NULL;
		count++;
		return 0;
	}
	return -1;
}

int get_item(uint16_t index)
{
	int i = 0;
	node_ptr_t current = head;
	while(i != index)
	{
		current = current->next;
		i++;
	}
	return current->item;
}

int no_of_items()
{
	return count;
}

int remove_item(void* item)
{
	return 0;
}

void free_memory()
{
	node_ptr_t current = head;
	do
	{
		node_ptr_t tmp = current;
		current = current->next;
		free(tmp);
	} while (current->next != NULL);
}
