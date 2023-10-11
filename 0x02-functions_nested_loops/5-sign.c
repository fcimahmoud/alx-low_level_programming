#include "main.h"

/**
 * print_sign - function to print + if n is greater than 0
 *                                0 if n is equal to 0 and
 *                                - if n is less than 0.
 *
 * @n: checks input of function
 *
 * Return: returns 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0')
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
