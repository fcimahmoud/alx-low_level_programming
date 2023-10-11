#include "main.h"

/**
 * print_last_digit - function to print the last digit of n
 *
 * @n: checks input of function
 *
 * Return: returns the value of the last digit
*/

int print_last_digit(int n)
{
	int l = n % 10;

	_putchar(l + '0');
	if(l >= 0)
		return (l);
	else
		return (-l);
}
