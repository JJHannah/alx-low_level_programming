#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
int i, x, y, len;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (x = 0; av[i][x] != '\0'; x++)
len++;
len++;
}
str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);

y = 0;

for (i = 0; i < ac; i++)
{
for (x = 0; av[i][x] != '\0'; x++)
{
str[y] = av[i][x];
y++;
}
str[y] = '\n';
y++;
}
return (str);
}
