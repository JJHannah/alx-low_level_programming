#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string, followed by a new line, to stdout
 *@str: string to print
 */

void _puts(char *str)
{

int j;

while (*(str + j) != '\0')
{
putchar(*(str + j));
j++;
}
putchar(10);
}
