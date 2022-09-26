#include "main.h"
#include <stdio.h>

/**
 *_strspn - A program that gets the length of a prefix substring
 *@s: string to evaluate
 *@accept: string containing the list of characters to match in s
 *@accept: accepted bytes
 *
 *Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int x, y, bool;
for (x = 0; *(s + x) != '\0'; x++)
{
bool = 1;
for (y = 0; *(accept + y) != '\0'; y++)
{
if (*(s + x) == *(accept + y))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (x);
}
