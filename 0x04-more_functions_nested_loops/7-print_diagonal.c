#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Write a function that draws a diagonal
 * line on the terminal.
 * from 0 to 14, followed by a new line.
 * @numberOfTimesTheCharacter: is the number of times the
 * character \ should be printed
 * You can only use _putchar three times in your
 */

void print_diagonal(int numberOfTimesTheCharacter)
{
	int length, space;

	if (numberOfTimesTheCharacter > 0)
	{
		/*Outer loop controls the number of rows in the diagonal pattern.*/
		for (length = 0; length < numberOfTimesTheCharacter; length++)
		{
			/* Inner loop is used to print spaces before */
			/* the backslash to create the diagonal effect.  */
			for (space = 0; space < length; space++)
			{
				_putchar(' ');
			}

			/* Print the backslash character. */
			_putchar('\\');

			/* Check if it's the last row, and if not, move to the next line. */
			if (length == (numberOfTimesTheCharacter - 1))
			{
				continue;
			}
			for (s = 1; s <= p; ++s)
				_putchar(' '); /*is equal to '/' char*/
			_putchar('\n');
		}
	}

	/* After the diagonal pattern is printed, print a */
	/* newline to separate it from other output. */
	_putchar('\n');
}
