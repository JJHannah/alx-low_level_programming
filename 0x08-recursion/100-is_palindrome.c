#include "main.h"

/**
 *is_palindrome -returns the 1 if s is a palindrome
 *@s: string to be evaluated
 *Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
int flag = 1;
check(s, 0, _strlen_recursion(s) - 1, &flag);
return (flag);
}

/**
 *check -checks if a string is a palindrome
 *@s: string to be checked
 *@start: start index
 *@end : end of index
 *@flag: flag to show if a sting is a palindrome
 *Return :void
 */

void check(char *s, int start, int end, int *flag)
{
if (start <= end)
{
if (s[start] == s[end])
*flag *= 1;
else
*flag *= 0;
checks(s, start + 1, end - 1, flag);
}
}

/**
 *_strlen_recursion -calculates the length of the string
 *@s: string to be used
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
int sum = 0;
if (*s != '\0')
{
sum++;
sum += _strlen_recursion(s + 1);
}
return (sum);
i}
