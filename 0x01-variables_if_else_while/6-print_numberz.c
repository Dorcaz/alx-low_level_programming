#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * *main- entry point
 * *
 * *Return: zero on success
 **/
int main(void)
{
int n = 0;
while (n <= 9)
{
	putchar(n + '0');
	n++;									}
putchar('\n');
return (0);
}
