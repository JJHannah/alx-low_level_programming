#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int x, y;

x = 0;
y = 0;

while (*(dest + x))
x++;
while (y < n && *(src + y))
{
*(dest + x) = *(src + y);
y++;
x++;
}
if (y < n)
*(dest + x) = *(src + y);

return (dest);
}
