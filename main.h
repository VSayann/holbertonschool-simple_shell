#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void print_prompt(void);
void read_user_input(char **line, size_t *len);
void tokenize_input(char *line, char **tokens, size_t *num_tokens);
void execute_command(char **tokens);
void Remove_newline(char *str);

#endif
