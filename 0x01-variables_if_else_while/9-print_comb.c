#include<stdlib.h>
#include<stdio.h>
/**
*main - main function
*
*Return: always 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i);
	if (i == 9)
	break;
	putchar(',');
	putchar(' ');
	}

	putchar('\n');
	return (0);
}
