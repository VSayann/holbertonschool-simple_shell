#include "main.h"

/**
* Read_user_input - Function
* Description: Reads user input from the standard input
* @line: Buffer where the input will be save
* @len: size of the buffer
*/

void Read_user_input(char **line, size_t *len)
{

	/* Read the user line input */
	if (getline(line, len, stdin) == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
	}


}
