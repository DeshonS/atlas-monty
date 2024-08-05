#include "monty.h"

/**
 * push - opening of file
 * @stack: double pointer to head of the stack
 * @line_number: the number of a line
 * Return: None
 */

void push(stack_t **stack, unsigned int line_number)
{
stack_t *node;
char *num;

num = strtok(NULL, "\t\r\n ");
if (num == NULL)
{
fprintf(stderr, "L<%u>: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
node = malloc(sizeof(stack_t));
if(node == NULL)
{
fprintf(stderr, "Error: Malloc failure\n");
exit(EXIT_FAILURE);
}
node->n = atoi(num);
node->prev = NULL;
node->next = *stack;
if(*stack != NULL)
{
(*stack)->prev = node;
}
*stack = node;
}
