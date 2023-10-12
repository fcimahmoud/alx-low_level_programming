#include "main.h"

/**
 * _isdigit - function to check for a digit
 *
 * @c: input for function
 *
 * Return: 1 if c isdigit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
