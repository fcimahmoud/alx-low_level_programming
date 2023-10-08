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
	int c;

	for (c = 0; c <= 9; ++c)
	{
		printf("%d", c);
	}
	putchar('\n');
	return (0);
}
