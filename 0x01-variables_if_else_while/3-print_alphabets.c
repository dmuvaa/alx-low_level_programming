#include<stdlib.h>
#include<stdio.h>
/**
*main- Entry Point
*Description: print alphabet
*return: always 0
**/
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c); 
	}

	c = 'A';
	for ( c= 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
