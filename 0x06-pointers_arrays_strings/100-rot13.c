#include "main.h"

#include <stdio.h>
/**
 * @s: ...
 * rot13 - ...
 * Return: ...
 */
char *rot13(char *s)
{
	int a = 0;

	while (s[a])
	{
		while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
		{
			s[a] -= 13;
			break;
		}

		a++;
	}
	return (s);
}
