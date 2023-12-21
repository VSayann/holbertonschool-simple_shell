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
    char *tokens[1024];
    size_t num_tokens;

    while (1)
	{
        print_prompt();
        read_user_input(&line, &len);

        if (strlen(line) > 0) {
            tokenize_input(line, tokens, &num_tokens);
            if (num_tokens > 0) {
                execute_command(tokens);
            }
        }
    }

    free(line);
    return 0;
}
