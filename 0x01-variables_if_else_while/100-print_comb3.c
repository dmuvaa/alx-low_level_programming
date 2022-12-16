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
	for (b = 49; b <= 57; b++)
	{
	if (b > a)
	{
	putchar(a + '0');
	putchar(b + '0');
	if (a != 56 || b != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar ('\n');
	return (0);
}
