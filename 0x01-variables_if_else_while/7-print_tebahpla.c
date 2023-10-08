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
	char c = 'z';

	for (; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
