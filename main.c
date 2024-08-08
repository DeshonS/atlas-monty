#include "monty.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char *line = NULL;
    size_t len = 0;
    unsigned int line_number = 0;

    while (getline(&line, &len, file) != -1) {
        line_number++;
        char *opcode = strtok(line, " \n");
        if (opcode == NULL) {
            continue;
        }

        if (strcmp(opcode, "push") == 0) {
            push(&global_stack, line_number);
        } else if (strcmp(opcode, "pall") == 0) {
            pall(&global_stack, line_number);
        } else {
            fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
            free(line);
            fclose(file);
            exit(EXIT_FAILURE);
        }
    }
    free(line);
    fclose(file);

    return 1;
}