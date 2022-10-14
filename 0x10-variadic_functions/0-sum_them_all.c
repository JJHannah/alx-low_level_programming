#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int sum = 0;
va_list list;

va_start(list, n);
for (x = 0; x < n; x++)
sum += va_arg(list, int);

va_end(list);

return (sum);
}
