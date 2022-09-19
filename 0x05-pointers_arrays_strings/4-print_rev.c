#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string to reverse
 *On success: returns no error
 */

void print_rev(char *s)
{
int j;
int len = 0;

while (*s != '\0')
{

len++;
++s;

}
s--;

for (i = len; i > 0; i--)
{

_putchar(*s);
s--;

}
_putchar('\n');
}
