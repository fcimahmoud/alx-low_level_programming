#include "main.h"
#include <stdio.h>

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * from 0 to 14, followed by a new line.
 * @numberOfLines: Number of times to print
 * You can only use _putchar three times in your code
 */

void print_line(int numberOfLines)
{
	while (numberOfLines-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
