#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
char *concat;
int len1 = 0, len2 = 0, x = 0, y = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + x))
len1++, x++;
while (*(s2 + y))
len2++,
y++;
len2++;

concat = malloc(sizeof(char) * (len1 + len2))

if (concat == NULL)
return (NULL);

x = 0, y = 0;
while (x < len1)
{
*(concat + x) = *(s1 + x);
x++;
}
while (y < len2)
{
*(concat + x) = *(s2 + y);
x++, y++;
}
return (concat);
}
