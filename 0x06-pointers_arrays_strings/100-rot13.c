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

int a[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int b[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (y = 0; s[y] != '\0'; y++)
{
x = 0;
while (a[x] != '\0' && s[y] != a[x])
x++;
if (s[y] == a[x])
s[y] = b[x];
}
return (s);
}
