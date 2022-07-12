#include "main.h"

/**
 * *_atoi - converts string to int
 * *@s: string to convert
 * *Description: converts string to int considering all negatives
 * *Return: integer
 **/

int _atoi(char *s)
{
	int i, a, b;

	a = 0;
	b = 1;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
		b = b * -1;
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		a = a * 10 + b * (s[i] - '0');
		if (a != 0 && !(s[i] >= '0' && s[i] <= '9'))
		return (a);
	}
	return (a);
}
