#include <stdio.h>

#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"

int main (void) {
  int a = 10;
  int b = -2;

  printf ("\nHere, we add, subtract and multiply....\n\n");
  printf ("%d\t+\t%d\t=\t%d\n", a, b, cal_add(a,b));
  printf ("%d\t-\t%d\t=\t%d\n", a, b, cal_subtract(a,b));
  printf ("%d\t*\t%d\t=\t%d\n", a, b, cal_multiply(a,b));
 
  while (1);
}


