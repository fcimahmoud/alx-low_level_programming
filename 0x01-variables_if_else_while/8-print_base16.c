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
	char x;
	int c;

	for (c = 0; c <= 9; ++c)
		putchar(c + '0');
	for (x = 'a'; x <= 'f'; ++x)
		putchar(x);
	putchar('\n');
	return (0);
}
