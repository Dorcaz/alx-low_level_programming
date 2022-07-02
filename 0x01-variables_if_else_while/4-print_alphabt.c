/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 **/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	if (c == 'e' || c == 'q')
	{
		c++;
	}
	else
	{
		putchar(c);
	}
	c++;
}
putchar('\n');
return (0);
}
