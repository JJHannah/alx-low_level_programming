#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *old_ptr;
unsigned int x;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
p = malloc(new_size);
if (!p)
return (NULL);

old_ptr = ptr;
if (new_size < old_size)
{
for (x = 0; x < new_size; x++)
p[x] = old_ptr[x];
}
if (new_size > old_size)
{
for (x = 0; x < old_size; x++)
p[x] = old_ptr[x];
}
free(ptr);
return (p);
i}
