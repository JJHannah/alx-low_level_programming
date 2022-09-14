#include "main.h"
/**
 * main-Entry point
 *
 * Return: 0 Always(success)
 */

int main(void)
{
char message[] = "_putchar";
for (int i = 0; i <=8; i++)
{
if (message[i] == '\0')
{
_putchar('\n');
break;
}
else
_putchar(message[i]);
}
return (0);
}
