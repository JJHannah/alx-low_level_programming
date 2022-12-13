#include "main.h"
#include <stdio.h>

/**
 *_strncpy - copies n bytes of src to the dest string
 *@dest: string to copy to
 *@src: string being copied
 *@n: number of bytes to copy
 *Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && *(src + j))
{
*(dest + j) = *(src + j);
j++;
}
while (j < n)
{
*(dest + j) = '\0';
j++;
}
return (dest);
}
