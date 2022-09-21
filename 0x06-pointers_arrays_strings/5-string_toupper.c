#include "main.h"
#include <stdio.h>

/**
 *string_toupper - changes all lowercase letters to uppercase
 *@s: string to change
 *Return: the resulting string
 */

char *string_toupper(char *s)
{
int j;

for (j = 0; s[j] != '\0'; j++)
{
if (s[j] >= 'a' && s[j] <= 'z')
s[j] = s[j] - 'a' + 'A';

}
return (s);
}
