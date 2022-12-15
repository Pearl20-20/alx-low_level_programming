#include <unistd.h>
/**
 * main - that prints _putchar
 * followed by a new line
 * Return: 0 Always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
