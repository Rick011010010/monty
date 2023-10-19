#include "monty.h"
/**
* exec_function - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int exec_function(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", push_fnct}, {"pall", pull_fnct}, {"pint", pinter_fnction}, // modifier
				{"pop", pop_fnction},
				{"swap", swap_fnction},
				{"add", add_fnction},
				{"nop", not_fnction},
                {"sub", fnct_sub},
				{"div", fnct_div},
				{"mul", fnct_mul},
				{"mod", fnct_mod},
				{"queue", qr_fnc},
				{"stack", stc_fnc}, // modifier
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		stack_fries(*stack); // modifier
		exit(EXIT_FAILURE); }
	return (1);
}
