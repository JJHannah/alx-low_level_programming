#include "main.h"
#include <stdio.h>

/**
 *string_toupper - changes all lowercase letters to uppercase
 *@s: string to change
 *Return: the resulting string
 */

char *string_toupper(char *)
{
int j = 0;

while (*(s + j))
{
if (*(s + j) >= 'a' && *(s + j) <= 'z')
*(s + j) -= 'a' - 'A';
j++;

}
return (s);
}
