#include<stdlib.h>
#include<stdio.h>
/**
*main - main function
*
*Return: always 0
*/
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
	for (b = a + 1; b <= 57; b++)
	{
	if (a < b)
	{
	putchar(a + '0');
	putchar(b + '0');
	if (a + b < 24)
	{
	putchar(',');
	putchar(' ');
	if (a != 56 || b != 57)
	}
	}
	}
	}
	putchar ('\n');
	return (0);
}
