#include<stdlib.h>
#include<stdio.h>
/**
*main - Entry point
*description- print backwards
*return: return value after executing to zero
*/
int main(void)
{
	char c = 'z';

	for(c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}

	putchar('\n');
	return (0);
}
