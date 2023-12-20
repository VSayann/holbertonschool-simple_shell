#include "main.h"

/**
* Tokenize_input - Function Tokenize_input
* Description: split the user input into tokens
* Use in order to get the differents command and arguments
* @line: command enter by the user
* @command: First token save in this variable
*/

void Tokenize_input(char *line, char **command)
{
	/* Tokenize the input into command and arguments */
	char *token = strtok(line, " ");

	*command = token;
}
