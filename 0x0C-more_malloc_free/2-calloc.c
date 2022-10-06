#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size){
void *p;
unsigned int x;

if (nmemb <= 0 || size <= 0)
return (NULL);

p = malloc(nmemb * size);
if (p == NULL)
return (NULL);

for (x = 0; x < nmemb * size; x++)
*((char *)p + x) = 0;

return (p);
}
