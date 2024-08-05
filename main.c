#include "monty.h"

int main(int argc, char *argv[])
{
    char *line;
    stack_t *ptr = NULL;
    int i = 0;
    char *n;
    int val;

    while(fgets(line, sizeof(line), stdin))
    {
        n = strtok(line, " \n");
        i++;
        if (n == NULL)
        {
            continue;
        }
    }
    if (strcmp(n, "push") == 0)
    {
        val = atoi(n);
        push(ptr, n);
    }
    else if (strcmp(n, "pall") == 0)
    {
        pall(ptr);
    }
    else
    {
        fprintf(stderr, "L%d: unknown instruction %s\n", i, n);
        exit(EXIT_FAILURE);
    }
    while (ptr != NULL)
    {
        stack_t *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    return (0);
}