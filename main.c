#include "monty.h"

int main(void)
{
    stack_t *stack = NULL;
    char line[256];
    unsigned int line_number = 0;

    while (fgets(line, sizeof(line), stdin) != NULL)
    {
        line_number++;
        char *opcode = strtok(line, " \t\r\n");

        if (opcode == NULL)
        {
            continue;
        }

        if (strcmp(opcode, "push") == 0)
        {
            push(&stack, line_number);
        }
        else if (strcmp(opcode, "pall") == 0)
        {
            pall(&stack);
        }
        else
        {
            fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
        }
    }

    while (stack != NULL)
    {
        stack_t *temp = stack;
        stack = stack->next;
        free(temp);
    }

    return 0;
}