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

    // Initialize the global stack
    global_stack = NULL;

    // Parse the file line by line and execute the instructions
    char *line = NULL;
    size_t len = 0;
    unsigned int line_number = 0;

    while (getline(&line, &len, file) != -1) {
        line_number++;
        // Parse the opcode and arguments from the line
        // Call the corresponding function pointer from instruction_t
    }

    // Clean up and close the file
    free(line);
    fclose(file);

    return 1;
}        