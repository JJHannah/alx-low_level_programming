#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
int j = 1;

unsigned int num = 0;

do {
if (*s == '-')
j *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);

return (num *j);
}
