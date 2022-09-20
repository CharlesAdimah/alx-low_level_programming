#include "main.h"

/**
 * swap_int - swaps the integer values
 * @a: this points to the first value
 * @b: this points to the second value
 */

void swap_int(int *a, int *b)
{
	int e = *a;

	*a = *b;
	*b = e;
}
