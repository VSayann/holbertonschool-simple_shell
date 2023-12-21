#include "main.h"
/**
* Remove_newline - Function Remove_newline
* Description: remove the "\n" in the input and replace by "\0"
* @str: string to take in argument
*/

void Remove_newline(char *str)
{
	size_t newlinePos = strcspn(str, "\n");

	if (str[newlinePos] == '\n')
	{
		str[newlinePos] = '\0';
	}
}
