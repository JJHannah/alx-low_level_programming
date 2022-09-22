#include "main.h"
#include <stdio.h>

/**
 *print_buffer - prints a s bytes of a buffer
 *inputted number of bytes from a buffer.
 *Prints 10 bytes per line.
 *Starts with the position of the first byte in hexadecimal (8 chars)
 *starting with `0`.
 *Each line shows the hexadecimal content (2 chars) of the buffer
 *2 bytes at a time, separated by a space.
 *Each line shows the content of the buffer
 * Each line ends with a new line `\n`
 *@b: number of bytes
 *@size: size of the byte
 * Return: void
 */

void print_buffer(char *b, int size)
{
int i, j, k;

if (size <= 0)
printf("\n");
else
{
for (i = 0; i < size; i += 10)
{
printf("%.8x:", i);
for (j = i; j < i + 10; j++)
{
if (j % 2 == 0)
printf(" ");
if (j < size)
printf("%.2x", *(b + j));
else
printf("  ");
}
printf(" ");
for (k = i; k < i + 10; k++)
{
if (k >= size)
break;
if (*(b + k) < 32 || *(b + k) > 126)
printf("%c", '.');
else
printf("%c", *(b + k));
}
printf("\n");
}
}
}
