#include "monty.h"
/**
* stack_fries - frees a doubly linked list
* @head: head of the stack
*/
void stack_fries(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
