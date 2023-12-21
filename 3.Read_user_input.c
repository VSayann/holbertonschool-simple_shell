#include "main.h"

/**
* Read_user_input - Function
* Description: Reads user input from the standard input
* @line: Buffer where the input will be save
* @len: size of the buffer
*/

void read_user_input(char **line, size_t *len)
{
	   size_t input_length;
    if (getline(line, len, stdin) == -1) {
        if (feof(stdin)) {
            printf("\n");
            exit(EXIT_SUCCESS);
        } else {
            perror("getline");
            exit(EXIT_FAILURE);
        }
    }
   	input_length = strlen(*line);
    if (input_length > 0 && (*line)[input_length - 1] == '\n') {
        (*line)[input_length - 1] = '\0';
    }
}