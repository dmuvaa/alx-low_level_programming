#include "main.h"
/**
 * int _strlen - return the value of a string
 * @s: Character to be returned
 * Return: 0 is a success
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
