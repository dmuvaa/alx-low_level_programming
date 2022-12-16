#include<stdlib.h>
#include<stdio.h>
/**
*main - main function program
*Retutn- 0
**/
int main(void)
{
	char c ='0';

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}

	c = 'a';

	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}

	putchar ('\n');
	return (0);
}
