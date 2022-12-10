#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
