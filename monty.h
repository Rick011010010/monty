#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *reallocation(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getTest(char **lineptr, int file);
char  *clean_line(char *content);
void push_fnct(stack_t **head, unsigned int number); // modifier fnc_ to ff_
void pull_fnct(stack_t **head, unsigned int number); // modifier
void pinter_fnction(stack_t **head, unsigned int number); // modifier
int exec_function(char *content, stack_t **head, unsigned int counter, FILE *file); // modifier
void stack_fries(stack_t *head); // modifier
void pop_fnction(stack_t **head, unsigned int counter);
void swap_fnction(stack_t **head, unsigned int counter);
void add_fnction(stack_t **head, unsigned int counter);
void not_fnction(stack_t **head, unsigned int counter);
void add_null(stack_t **head, int n);
void fnct_sub(stack_t **head, unsigned int counter);
void fnct_div(stack_t **head, unsigned int counter);
void fnct_mul(stack_t **head, unsigned int counter);
void fnct_mod(stack_t **head, unsigned int counter);
void ajouter_quee(stack_t **head, int n); 
void qr_fnc(stack_t **head, unsigned int counter); // modifier
void stc_fnc(stack_t **head, unsigned int counter); // modifier// modifier...
#endif
