#include "main.h"
/**
 * *jack_bauer - prints all minutes of the day
 * *@void: first int to add
 **/
void jack_bauer(void)
{
	int hh;
	int mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
