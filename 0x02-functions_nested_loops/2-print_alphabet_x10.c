#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0 ; i <= 10 ; i++)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
