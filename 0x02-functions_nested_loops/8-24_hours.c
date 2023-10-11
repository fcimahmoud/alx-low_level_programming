#include "main.h"

/**
 * jack_bauer - function to print the last digit of n
 *
 * @n: checks input of function
 *
 * Return: returns the value of the last digit
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
                  printf("%d%d : %d%d \n", a, b, c, d);
                }
            }
        }
    }
}
