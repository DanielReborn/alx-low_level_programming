#include <stdio.h>
/**
 * main - prints all single digit numbers of base the starting from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}

