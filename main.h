#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void print_prompt(void);
void Read_user_input(char **line, size_t *len);
void Tokenize_input(char *line, char **command);
int Execute_command(char *command);
void Remove_newline(char *str);

#endif
