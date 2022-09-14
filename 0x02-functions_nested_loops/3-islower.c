#include "main.h"
/**
 *_islower-will checks for the  lowercase character
 *Return: 1 if lowercase and 0 if uppercase 
 */
int _islower(int c)
{
if(c >= 'a' and c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
