#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function
 * to print the alphabet a - z
*/

void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i < 9; ++i)
	{
	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
	}
}
