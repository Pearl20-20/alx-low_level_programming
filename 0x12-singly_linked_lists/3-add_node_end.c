#include "lists.h"
/**
 * _strlen - returns the length of a string
 *  @s: the string
 *   Return: length
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string added to node
 *
 *  Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);

	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		last = (*head);
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
