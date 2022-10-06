#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
int *p;
int x, size;

if (min > max)
return (NULL);

size = max - min + 1;

p = malloc(sizeof(int) * size);
if(p == NULL)
return (NULL);

for (x = 0; min < max; x++)
p[x] = min++;

return (p);
}
