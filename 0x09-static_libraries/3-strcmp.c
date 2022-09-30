#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: outputs of the difference of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
int j = 0;
while (*(s1 + j) && *(s2 + j) && (*(s1 + j) == *(s2 + j)))
j++;

return (*(s1 + j)-*(s2 + j));
}
