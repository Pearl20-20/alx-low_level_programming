#include "lists.h"
/**
 * print_list - prints the elements of a list
 *  @h: pointer to the first element in the list
 *  Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	int i = 0;
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
	return (i);
}
