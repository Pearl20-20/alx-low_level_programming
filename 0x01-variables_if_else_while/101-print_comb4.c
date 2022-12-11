#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 Always
 */
int main(void)
{
	int n, m, j;

	for (n = 48; n < 58; n++)
	{
		 for (m = 48; m < 58; m++)
		{
			for (j = 48; j < 58; j++)
			{
				if (j > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(j);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
