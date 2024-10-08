#include "monty.h"

/**
 * pall - prints the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in the code
 * Return: None
 */

void pall(stack_t **stack, unsigned int line_number) 
{
    stack_t *current = *stack;
    while (current) {
        printf("%d\n", current->n);
        current = current->next;
    }
    (void)line_number;
}