#include <stdio.h>
/**
 * main - prints all alphabets in lower case
 * and then in upper case,
 *
 * Return: 0 Always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
