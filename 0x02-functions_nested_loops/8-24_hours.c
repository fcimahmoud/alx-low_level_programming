#include "main.h"

/**
 * jack_bauer - function to print every minute of the day of Jack Bauer
 *
 * Return: prints every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
	int a, b, c;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 5; ++b)
		{
			for (c = 0; c <= 9; ++c)
			{
				printf("0%d:%d%d\n", a, b, c);
			}
		}
	}
	for (a = 0; a <= 2; ++a)
	{
		for (b = 0; b <= 5; ++b)
		{
			for (c = 0; c <= 9; ++c)
			{
				printf("1%d:%d%d\n", a, b, c);
			}
		}
	}
}
