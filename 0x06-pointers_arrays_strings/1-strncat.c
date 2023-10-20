#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: pointer to resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
		++c1;

	for (c2 = 0; c1 < n && src[c2] != '\0'; ++c2)
		dest[c1 + c2] = src[c2];

	dest[c1 + c2] = '\0';
	return (dest);
}
