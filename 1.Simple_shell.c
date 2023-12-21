#include "main.h"

/**
* main - Command line user interface that allows to interact with
* an operating system
* Return: 0 on sucess
*/


int main(void)
{
	char *line = NULL;
	size_t len = 0;
	char *command;


	while (1)
	{
	if (isatty(fileno(stdout)))
	{
	printf("$ ");
	fflush(stdout);
	}
		Read_user_input(&line, &len);
		Tokenize_input(line, &command);
		Execute_command(command);
	}

	free(line);

	return (0);
}
