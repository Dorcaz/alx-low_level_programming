#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * *main- entry point
 * *
 * *Return: zero on success
 **/
int main(void)
{char hold = 'z';
while (hold >= 'a')
{
	putchar(hold);
	hold--;
}
putchar('\n');
return (0);
}
