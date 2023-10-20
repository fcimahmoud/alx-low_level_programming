#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Write a function that compares two strings.
 * Prototype: int _strcmp(char *s1, char *s2);
 * Your function should work exactly like strcmp
 */

int _strcmp(char *firstString, char *secondString)
{

	while (*firstString != '\0' && *secondString != '\0')
	{
		if (*firstString < *secondString)
		{
			output = *firstString - *secondString;
			return (output);
		}
		else if (*firstString > *secondString)
		{
			output = *firstString - *secondString;
			return (output);
		}
		firstString++;
		secondString++;
	}
	return (0);
}
