#pragma once
#include <stdint.h>

int add_item(int item); // Return 0 if item added else -1
int get_item(uint16_t index); // Return pointer to item at given index in the list
int no_of_items(); // Return no of items in list
int remove_item(void * item); // Return 0 if item removed else -1
void free_memory();