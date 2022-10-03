#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strlen - returns the length of a string
 *  @s: string
 *  Return: length
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
len++,
s++;

return (len);
}

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
char *s;

int len = 0, i, x, y = 0;
if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len += _strlen(av[i]);
}
len += (ac + 1)

s = malloc(len * sizeof(char));

if (s == NULL)
{
free(s);
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (x = 0; x < _strlen(av[i]); x++)
{
s[y++] = av[i][x];
}
s[y++] = '\n';
}
return (s);
}
