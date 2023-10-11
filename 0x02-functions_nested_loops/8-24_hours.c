#include "main.h"

/**
 * jack_bauer - function to print every minute of the day of Jack Bauer
 *
 * Return: prints every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
int a, b, c, d;
for (a = 0; a <= 9; ++a)
{
for (b = 0; b <= 9; ++b)
{
for (c = 0; c <= 9; ++c)
{
for (d = 0; d <= 9; ++d)
{
printf("%d%d:%d%d\n", a, b, c, d);
}
}
}
}
}
