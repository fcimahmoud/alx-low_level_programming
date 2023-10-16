#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: string parameter
 *
 * Return:
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
	}
}	_putchar('\n');
