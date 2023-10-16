#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: string parameter
 *
 * Return:
*/
void _puts(char *string)
{
	/* Initialize a counter variable 'num' to 0. */
	int num = 0;

	/* Use a 'for' loop to iterate through the characters in the */
	/* string until a null-terminating character ('\0') is encountered. */
	for (; string[num] != '\0'; num++)
	{
		/* Call the '_putchar' function to print the */
		/* current character in the string. */
		putchar(string[num]);
	}

	/* After printing the string, add a new line  */
	/* character to create a newline in the output. */
	putchar('\n');
}
