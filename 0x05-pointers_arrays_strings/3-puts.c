#include "main.h"
#include <stdio.h>

/**
 *_puts - prints a string, followed by a new line, to stdout
 *@str: string to print
 */

void _puts(char *str)
{

int j;

for (j = 0; str[j] != '\0'; j++)
{
puts(str[j]);
}
puts('\n');
}
