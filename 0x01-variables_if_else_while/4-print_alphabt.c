#include <stdio.h>
/**
 * main - prints the alphabet in lower case,
 *
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
