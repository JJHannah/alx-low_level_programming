#include "main.h"
#include <stdio.h>

/**
 *rot13 - encodes a string in rot13
 *@s: string to encode
 *Return: the resulting string
 */

char *rot13(char *s)
{
int x = 0;
int y;

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + x) != '\0')
{
for (y = 0; y < 52; y++)
{
if (*(s + x) == a[y])
{
*(s + x) = rot13[y];
break;
}
}
x++;
}
return (s);
}
