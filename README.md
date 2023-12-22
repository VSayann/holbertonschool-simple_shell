# Simple Shell

This is a basic implementation of a simple shell in C.

## Description

This project implements a simple shell in C that supports basic command execution, environment variable display, and shell exit functionality.

![image](https://github.com/VSayann/holbertonschool-simple_shell/assets/141931123/d3447889-d482-416f-be25-c98e3cd02d6f)

## Features

- **Command Execution:** Executes commands using fork and execve.
- **Environment Variables:** Displays current environment variables.

## Files

- **main.h :** Header file containing function prototypes and necessary includes.
- **1.Simple_Shell :** Command line user interface that allows to interact with an operating system.
- **2.Print_prompt.c :** Display the prompt that invite user to interact whith the shell.
- **3.Read_user_input.c :** Reads user input from the standard input.
- **4.Remove_newline.c :** Remove the "\n" in the input and replace by "\0".
- **5.Tokenize_input.c :** Split the user input into tokens to get the differents command and arguments.
- **6.Execute_command.c :** Execute the command given.

## Requirements

- Allowed editors: vi, vim, emacs
- No memory leaks
- No more than 5 functions per file
- All header files include guarded
- Uses system calls only when necessary

## Compilation

Compile the shell using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Testing

Run the shell in interactive mode:

```bash
Copy code
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

Run the shell in non-interactive mode:

```bash
Copy code
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
```

## Authors

Sayann Valmond <sayann.valmond@holbertonstudents.com><br />
François Gosselin <gosselin.francois@holbertonstudents.com>
