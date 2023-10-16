#include "main.h"

/**
 * swap_int -  swap the values of tow integers
 *
 * @a: first input
 * @b: second input
 *
 * Return:
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
