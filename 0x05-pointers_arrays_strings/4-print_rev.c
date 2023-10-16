#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: input
 *
 * Return:
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		++i;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
