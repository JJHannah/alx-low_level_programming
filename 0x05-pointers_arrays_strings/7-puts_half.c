#include "main.h"

/**
 *puts_half - prints half of a string
 *followed by a new line
 *@str: string to be printed
 */

void puts_half(char *str)
{
int len, n, j;

len = 0;

while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
for (j = len / 2; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
