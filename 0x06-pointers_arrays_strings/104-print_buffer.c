#include "main.h"

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
int x = 0, y;
if (size < 0)
{
printf('\n');
return;
}
while (x < size)
{
if (x % 10 == 0)
printf("%08x: ", x);
for (y = x; y < x + 9; y += 2)
{
if ((y < size) && ((y + 1) < size))
printf("%02x%02x: ", b[y], b[y + 1]);
else
{
while (++y <= x + 10)
printf(" ");
printf(" ");
}
}
for (y = x; y < x + 9 && y < size; y++)
{
if (b[y] >= 32 && b[y] <= 126)
printf("%c", b[y]);
else
printf(".");
}
printf('\n');
x += 10;
}
}
