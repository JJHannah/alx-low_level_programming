#include "main.h"
#include <stdio.h>

/**
 *_memset - fill n bytes of memory with a constant value
 *@s: pointer to memory area
 *@b: constant value
 *@n: number of bytes to fill
 *
 *Return: the  memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n);
{
s[n - 1] = b;
n--;
}
return (s);
}
