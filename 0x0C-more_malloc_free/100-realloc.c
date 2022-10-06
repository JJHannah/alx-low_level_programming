#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * ptr: pointer to the memory previously allocated (malloc(old_size))
 * @old_size: size previously allocated
 * @new_size: new size of the new memory block
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int x;

if (new_size == 0 && ptr != NULL) 
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
else
return (p);
}
p = malloc(new_size);
if (p == NULL)
return (NULL);

for (x = 0; x < old_size && x < new_size; x++)
*((char *)p + x) = *((char *)ptr + x);
free(ptr);

return (p);
}
