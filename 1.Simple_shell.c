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
		print_prompt();
		Read_user_input(&line, &len);
		Remove_newline(line);
		Tokenize_input(line, &command);
		Execute_command(command);
	}

	free(line);

	return (0);
}
