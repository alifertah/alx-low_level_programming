
#include "main.h"

/**
 * print_last_digit - Entry point
 * @r: int input
 * Description: prints the last digit of a number
 * Return: last digit of number r
 */

int print_last_digit(int r)
{
if (r < 0)
r *= -1;
_putchar((r % 10) + '0');
return (r % 10);
}
