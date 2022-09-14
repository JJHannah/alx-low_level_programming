#include "main.h"
/**
 * main-Entry point
 *
 * Return: 0 Always(success)
 */

int main(void)
{
char message[] = "_putchar";
for (int count = 0; count <=8; count++)
{
if (message[count] == '\0')
{
_putchar('\n');
break;
}
else
_putchar(message[count]);
}
return (0);
}
