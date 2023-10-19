#include "monty.h"
/**
 * pull_fnc - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void pull_fnct(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	if (he == NULL)
		return;
	while (he)
	{
		printf("%d\n", he->n);
		he = he->next;
	}
}
