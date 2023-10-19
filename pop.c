#include "monty.h"
/**
 * pop_fnction - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pop_fnction(stack_t **head, unsigned int counter)
{
	stack_t *he;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		stack_fries(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	*head = he->next;
	free(he);
}
