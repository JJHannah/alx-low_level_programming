#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
unsigned int j = 0;

for (; *(s + j) != '\0'; j++)
if (*(s + j) == c)
return (s + j);
if (*(s + j) == c)
return (s + j);
return ('\0');
}
