#include<stdlib.h>
#include<stdio.h>
/**
*main- Entry Point
*Description: print alphabet
*return: always 0
**/
int main (void)
{
	char c = 'a';

	for ( c= 'a'; c <= 'z'; c++)
	{
	putchar(c); 
	}

	putchar('\n');
	return (0);
}
	
