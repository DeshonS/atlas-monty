#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - opening of file
 * @stack: double pointer to head of the stack
 * @line_number: the number of a line
 */

void push(stack_t **stack, unsigned int line_number)
{
    stack_t *node;
    char *num;

    num = strtok(NULL, "\t\r\n ");
    if (num == NULL)
    {
        printf(stderr, "L<%u>: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }
    node = malloc(sizeof(stack_t));
    if(node == NULL)
    {
        printf(stderr, "Error: Malloc failure\n");
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
