#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* *main- entry point
* *Return: zero on success
**/
int main(void)
{
char n = '0';
while (n <= '9')
{
	putchar(n);
	n++;
}
n = 'a';
while (n <= 'f')
{
	putchar(n);
	n++;
}
putchar('\n');
return (0);
}
