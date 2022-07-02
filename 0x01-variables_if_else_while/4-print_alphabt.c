#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 **/
int main(void)
{
char catch = 'a';
while (catch <= 'z')
{
	if (catch != 'e' || catch != 'q')
	{
		putchar(catch);
	}
	catch++;
}
putchar('\n');
return (0);
}
