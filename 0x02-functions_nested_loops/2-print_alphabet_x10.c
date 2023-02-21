#include "main.h"
/**
 * print_alphabet_x10 - void print_alphabet_x10
 * Description: Pritn alphebet in lower case
 * Return: void
*/
void print_alphabet_x10(void)
{
int a = 97;
int i = 0;
while (i < 10)
{
a = 97;
while (a < 97 + 26)
_putchar(a++);
_putchar('\n');
i++;
}
}

