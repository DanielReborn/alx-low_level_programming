#include <stdio.h>
/**
 * main - prints all numbers of base 16bin lowercase
 *followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int b = '0';
char c = 'a';
	while (b <= '9')
	{
	putchar(b);
	b++;
	}
	while (c <= 'f')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}

