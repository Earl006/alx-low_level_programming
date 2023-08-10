#include <unistd.h>
/**
 * main - A program that prints a statement on a line and does not use <stdio.h
 * Returns: 1 (Success)
 */
int main(void)
{
write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
return (1);
}

