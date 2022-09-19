#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *Return: length
 */
void rev_string(char *s)
{
char tmp;
int j, len, len1;

len = 0;
len1 = 0;

while (s[len] != '\0')
{
len++;
}
len1 = len - 1;

for (j = 0; j < len / 2; j++)
{
tmp = s[j];
s[j] = s[len1];
s[len1--] = tmp;
}
}
