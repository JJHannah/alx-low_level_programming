#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars,
 *@size: size of array
 *@c: fill array values with this char
 *Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
char *arr;
int j = 0;

if (size <= 0)
return (NULL);

arr = malloc(sizeof(char) * size);/*will allocate the memory*/

if (arr == NULL)
return (NULL);

while (j < (int)size)/*will set the array values to c */
{
*(arr + j) = c;
j++;
}
*(arr + j) = '\0';
return (arr);
}
