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
		putchar(c);
	for (x = 'A'; x <= 'Z'; ++x)
		putchar(x);
	putchar("$\n");
	return (0);
}
