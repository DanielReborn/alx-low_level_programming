#include <stdio.h>
/**
 * main - prints all letters except q and e,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char al;
	for (al = 'a'; al <= 'z'; al++)
		{
		if (al != 'e' && al != 'q')
			{
			putchar(al);
			}
		}
		putchar('\n');
		return (0);
}
