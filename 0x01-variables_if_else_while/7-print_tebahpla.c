#include <stdio.h>
/**
 * main - prints the lower case alphabets in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char al;
	for (al = 'z'; al >= 'a'; al--)
	{
	putchar(al);
	}
	putchar('\n');
	return (0);
}


