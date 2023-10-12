#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: number of times the \ char should be printed
 */

void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; ++p)
		{
			for (s = 1; s <= p; ++s)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
