#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int x;
char *s;

if (n > 0)
{
va_start(valist, n);
for (x = 1; x <= n; x++)
{
s = va_arg(valist, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (x != n && separator != NULL)
printf("%s", separator);
}
va_end(valist);
}
printf("\n");
}
