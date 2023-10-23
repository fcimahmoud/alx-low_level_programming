#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer to put const
 * @b: const
 * @n: max bytes to use
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
