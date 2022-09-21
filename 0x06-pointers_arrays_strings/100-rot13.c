#include "main.h"
#include <stdio.h>

/**
 *rot13 - encodes a string in rot13
 *@s: string to encode
 *Return: the resulting string
 */

char *rot13(char *s)
{
int x;
int y;

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; a[y] != '\0'; y++)
{
if (s[x] == a[y])
{
s[x] = b[y];
break;
}
}
}
return (s);
}
