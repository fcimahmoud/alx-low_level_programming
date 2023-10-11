#include "main.h"

/**
 * times_table - function to print the 9 times table
 *
 * Return: prints 9 times table
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			int ans = i * j;

			if (j < 9)
				printf("%d, ", ans);
			else
				printf("%d\n", ans);
		}
	}
}
