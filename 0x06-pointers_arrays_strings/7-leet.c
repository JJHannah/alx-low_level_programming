#include "main.h"
#include <stdio.h>

/**
 *leet - encode string into 1337 leet
 *@s: string to manipulate
 *Return: the string
 */

char *leet(char *s)
{
int x, y;

char *a = "aAeEoOtTlL";
char *b = "4433007711";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y < 10; y++)
{
if (s[x] == a[y])
{
s[x] = b[y];
}
}
}
return (s);
}
