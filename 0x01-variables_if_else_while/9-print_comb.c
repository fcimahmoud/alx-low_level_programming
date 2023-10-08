#include <stdio.h>

/**
 * main - entry point
 *
 * Des : print all chars in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int c = 0;

	for (; c <= 9; ++c)
	{
		putchar(c + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
