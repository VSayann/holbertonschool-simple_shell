#include "main.h"

/**
* Tokenize_input - Function Tokenize_input
* Description: split the user input into tokens
* Use in order to get the differents command and arguments
* @line: command enter by the user
* @command: First token save in this variable
*/

void tokenize_input(char *line, char **tokens, size_t *num_tokens)
{
	char *token = NULL;
    *num_tokens = 0;
    token = strtok(line, " ");
    while (token != NULL && *num_tokens < 64) {
        tokens[(*num_tokens)++] = token;
        token = strtok(NULL, " ");
    }
}
