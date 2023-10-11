#include "main.h"

/**
 * jack_bauer - function to print every minute of the day of Jack Bauer
 *
 * Return: prints every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
	int a, b, c, i;

	for (i = 0; i <= 1; ++i)
		{
	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 5; ++b)
		{
			for (c = 0; c <= 9; ++c)
			{
				printf("%i%d:%d%d\n", i, a, b, c);
			}
		}
	}
		}
	for (a = 0; a <= 3; ++a)
	{
		for (b = 0; b <= 5; ++b)
		{
			for (c = 0; c <= 9; ++c)
			{
				printf("2%d:%d%d\n", a, b, c);
			}
		}
	}
}
