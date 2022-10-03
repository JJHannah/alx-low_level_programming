#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word -function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
int flag, j, l;

flag = 0;
l = 0;

for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
l++;
}
}
return (l);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
char **split, *tmp;
int x, y = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

split = (char **) malloc(sizeof(char *) * (words + 1));
if (split == NULL)
return (NULL);

for (x = 0; x <= len; x++)
{
if (str[x] == ' ' || str[x] == '\0')
{
if (c)
{
end = x;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
split[y] = tmp - c;
y++;
c = 0;
}
}
else if (c++ == 0)
start = x;
}
split[y] = NULL;
return (split);
}
