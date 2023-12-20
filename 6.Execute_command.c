#include "main.h"

/**
* Execute_command - Function Execute_command
* Description: Execute the command given
* @command: Command given by user
*/


int Execute_command(char *command)
{
    pid_t pid;
    int status;
	char *token;

    pid = fork();
    if (pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0) /* Child process */
    {
        char *path = getenv("PATH");
        char *path_copy = strdup(path);

        if (path_copy == NULL)
        {
            perror("strdup");
            exit(EXIT_FAILURE);
        }

        token = strtok(path_copy, ":");

        while (token != NULL)
        {
            char *executable_path = malloc(strlen(token) + strlen(command) + 2);

            if (executable_path == NULL)
            {
                perror("malloc");
                exit(EXIT_FAILURE);
            }

            sprintf(executable_path, "%s/%s", token, command);

            if (access(executable_path, X_OK) == 0)
            {
                char **argv = malloc(2 * sizeof(char *));
                if (argv == NULL)
                {
                    perror("malloc");
                    exit(EXIT_FAILURE);
                }

                argv[0] = executable_path;
                argv[1] = NULL;

                /* Execute the command */
                if (execvp(executable_path, argv) == -1)
                {
                    perror("execvp");
                    exit(EXIT_FAILURE);
                }

                free(argv);
            }

            free(executable_path);
            token = strtok(NULL, ":");
        }

    /* If the loop completes, the command was not found */
        fprintf(stderr, "Command not found: %s\n", command);
        free(path_copy);
        exit(EXIT_FAILURE);
    }
    else /* Parent process */
    {
        waitpid(pid, &status, 0);

        if (WIFEXITED(status) && WEXITSTATUS(status) == EXIT_SUCCESS)
        {
            return 0;}
        else
        {
            return -1; 
        }
    }
}
