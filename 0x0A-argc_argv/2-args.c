#include "main.h"
#include <stdio.h>

/**
 *main - print product of argument numbers
 *@argc: argument counter
 *@argv: numbers to multiply
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
int x = 0;

while (x < argc)
printf("%s\n", argv[x++]);

return (0);
}
