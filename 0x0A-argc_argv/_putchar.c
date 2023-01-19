#include "main.h"
#include <unistd.h"
/**
 * _putchar - function to print character
 * @c: the character to be print
 *
 * Return: on success return 1 else -12
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
