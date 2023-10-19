#include "monty.h"
/**
 * pinter_fnction - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pinter_fnction(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		stack_fries(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
