#include "main.h"
/**
 * main- Entry point
 *print_alphabet -prints lowercase
 *  Return: 0 Always(success)
 */
void print_alphabet(void)
{
char alpha;
alpha = 'a';

while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
