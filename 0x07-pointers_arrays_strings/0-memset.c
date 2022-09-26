#include "main.h"
#include <stdio.h>

/**
 *_memset - fill n bytes of memory with a constant value
 *@s: pointer to memory area
 *@b: constant value
 *@n: number of bytes to fill
 *Return: the  memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; j < size; j++)
{
s[j] = b;
}
return (s);
}
