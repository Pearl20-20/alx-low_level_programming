#include <stdio.h>
#include <unistd.h>
echo "This is an error" >&2
/**
 * main - prints exactly and that piece of art
 * is useful" - Dora Korpar, 2015-10-19
 * Return: 1 (success) always
 */
int main(void)
{
	write(1, "and that piece of art is usefu\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
