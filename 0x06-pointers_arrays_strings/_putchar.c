#include <stdio.h>
#include <main.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: the charcter to print
 *
 * Return: on success 1.
 *         on error is retured, and error is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
