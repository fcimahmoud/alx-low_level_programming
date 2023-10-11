#include "main.h"

/**
 * _abs - function to print the absolute value of an integer
 *
 * @n: checks input of function
 *
 * Return: _abs(n)
*/

int _abs(int n)
{
	int x = n * n;

	x /= n;

	return (x);
}
