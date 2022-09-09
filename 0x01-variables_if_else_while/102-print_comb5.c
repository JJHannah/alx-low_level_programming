#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d;

a = b = c = 48; d = 49;
while  ((a < 58))
{
putchar(a);
putchar(b);
putchar(32);
putchar(c);
putchar(d);
if ((a == 57) && (b == 56) && (c == 57) && (d == 57))
{
putchar('\n');
a++;
}
else
{
putchar(44);
putchar(32);
if ((c == 57) && (d == 57))
{
if (b < 56)
{
d = ++b + 1;
c = a;
}
else if (b == 56)
{
b++;
c = a + 1;
d = 48;
}
else if (b == 57)
{
b = 48;
d = 49; 
c = ++a;
}
}
else if (d < 57)
{
d++;
}
else
{
d = 48; c++;
}
}
}
return (0);
}
