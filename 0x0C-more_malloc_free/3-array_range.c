#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
int *p;
int x;

int y = (max - min + 1);
if (min > max)
return (NULL);

p = malloc(sizeof(int) * y);
if (p == NULL)
return (NULL);

for (x = 0; x < y; x++)
ptr[x] = min++;

return (p);
}
