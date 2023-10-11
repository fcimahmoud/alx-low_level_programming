#include "main.h"

/**
 * _isalpha - function to check the character is letter
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is letter
 * otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
