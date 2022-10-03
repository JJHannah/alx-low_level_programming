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
char *new_string = NULL;
int i = 0, j = ac, k, sum = 0, temp = 0;

if (ac == 0 || av == NULL)
return (NULL);

while (ac--)
sum += (len(av[ac]) + 1);
new_string = (char *) malloc(sum + 1);

if (new_string != NULL)
{
while (i < j)
{
for (k = 0; av[i][k] != '\0'; k++)
new_string[k + temp] = av[i][k];
new_string[temp + k] = '\n';
temp += (k + 1);
i++;
}
new_string[temp] = '\0';
}
else
{
return (NULL);
}
return (new_string)
}
