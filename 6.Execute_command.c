#include "main.h"

/**
* Execute_command - Function Execute_command
* Description: Execute the command given
* @command: Command given by user
*/

void Execute_command(char *command)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	else if (pid == 0) /* Child process */
	{
		char **argv = malloc(2 * sizeof(char *));

		if (argv == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		argv[0] = command;
		argv[1] = NULL;

		/* Execute the command */
		if (execvp(command, argv) == -1)
		{
			perror("execvp");
			exit(EXIT_FAILURE);
		}

		free(argv);
	}

	else /* Parent process */
	{
		wait(&status);
	}

}
