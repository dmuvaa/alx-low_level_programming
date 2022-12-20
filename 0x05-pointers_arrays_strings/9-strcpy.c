#include "main.h"

/**
 * *_strcpy - copy the string pointed to by src
 * @*dest: buffer to be pointed
 * @str: String to check
 * Return: 0 is success
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
