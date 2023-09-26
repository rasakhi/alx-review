#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer a
 * @b: pointer to integer b
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a; /* holds value of a */
	*a = *b; /* assigns value of b to a */
	*b = i; /* assigns value of i to b */
}
