#include "main.h"

/**
 * _islower - function to check the character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase
 * otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
