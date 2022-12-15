#include<stdlib.h>
#include<stdio.h>
/**
*main - Entry point
*Print alphabet minus e and q
*Return: Return 0
*/
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
{
	if (c == 'e' || c == 'q')
	{
	continue;
	}
	putchar(c);
}
	putchar('\n');
	return (0);
}
