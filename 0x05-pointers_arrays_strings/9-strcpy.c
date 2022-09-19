#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointed to by src
 *including the terminating null byte (\0)
 *@dest: destination
 *@src: source
 *Return: destination
 */

char *_strcpy(char *dest, char *src)
{
int len, j;

while (src[len] != '\0')
{
len++;
}
for (j = 0; j < len; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';

return (dest);
}
