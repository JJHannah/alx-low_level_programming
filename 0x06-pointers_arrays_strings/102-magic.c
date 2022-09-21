#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/**
 *write your line of code here...
 *Note:
 *You are not allowed to use the variable a
 *You are not allowed to modify the variable p
 *You are not allowed to use 
 *only one statement
 *You are allowed to use the standard library
 *you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
