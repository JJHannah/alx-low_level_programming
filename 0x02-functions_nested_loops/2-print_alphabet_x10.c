#include "main.h"
/**
 * print_alphabet_x10 - will print lowercase alphabet ten times
 * Return: 0 Always(success)
 */
void print_alphabet_x10(void)
{
char alpha;
int ch;
for (ch = 1; ch <= 10; ch++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
