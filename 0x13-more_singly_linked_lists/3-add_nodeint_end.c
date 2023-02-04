#include "lists.h"

/**
 *  add_nodeint_end - Adds a new node at the
 *                    end of a listint_t list.
 * @head: A pointer to the address of the
 *         head of the listint_t list.
 *  @n: The integer for the new node to contain.
 *   Return: If the function fails - NULL.
 *           Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	/*place new_node first if head is NULL*/
	if (temp == NULL)
		*head = new_node;
	else
	{
		/*if head is not null, and next is not NULL*/
		while (temp->next != NULL)
			temp = temp->next;	/*go to the last node*/

		/*place our new node at the end*/
		temp->next = new_node;
		{

			return (*head);
		}
