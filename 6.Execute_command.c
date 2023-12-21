#include "main.h"

/**
* Execute_command - Function Execute_command
* Description: Execute the command given
* @command: Command given by user
*/

void execute_command(char **tokens)
{
    pid_t pid;
    int status;

    pid = fork();
    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {

        execvp(tokens[0], tokens);


        perror("execvp");
        exit(EXIT_FAILURE);
    } else {

        waitpid(pid, &status, 0);
    }
}
