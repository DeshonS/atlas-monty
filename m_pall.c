#include "monty.h"

/**
 * pall - prints the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in the code
 * Return: None
 */

void pall(stack_t **stack)
{
stack_t *ptr = *stack;

while (ptr != NULL)
{
fprintf(stdout, "%d\n", ptr->n);
ptr = ptr ->next;
}
}
