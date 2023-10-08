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
	char c, x;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e' || c == 'q')
			++c;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
