#include "monty.h"

/**
 * pall - prints the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in the code
 * Return: None
 */

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *ptr = *stack;
(void) line_number;

while (ptr != NULL)
{
printf(stdout, "%d\n", ptr->n);
ptr = ptr ->next;
}
}
