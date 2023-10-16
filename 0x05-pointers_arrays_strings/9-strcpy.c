#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 *
 * @dest: first input
 * @src: second input
 *
 * Return: pointer to "dest"
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while	(src[i] != '\0');

	return (dest);
}
