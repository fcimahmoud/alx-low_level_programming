#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Write a a function that draws a diagonal line
 *
 * @n: Number of times to print
 *
 * You can only use _putchar in your code
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < i; ++j)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
