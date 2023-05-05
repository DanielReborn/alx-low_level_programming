#include<stdio.h>
void reverseChar( char *str );
int main(void) 
{
	reverseChar("hello");

	return 0;
}
void reverseChar( char *str );
{
	int i len = 0;

	while ( str[i++] )
	{
		len++;
	}
	for ( i = len -1; i >= 0; i-- )
	{
		printf("%c", str[i]);
	}
}
