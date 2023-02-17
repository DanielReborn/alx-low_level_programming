#include <stdio.h>
/**
 * main - prints the alphabets in lowercase,
 * then prints the alphabet in uppercase ,
 * folloed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char al;
	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
