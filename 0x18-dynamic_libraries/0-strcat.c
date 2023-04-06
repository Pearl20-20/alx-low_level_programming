#include "main.h"

#include <stdio.h>
/**
 * _strcat - Concatenates the string pointed to
 * null byte, to the end of the string pointed to by @dest.
 * @src: The source string
 * @dest: A pointer to the string to be concatenated upon.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
