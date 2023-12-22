# Simple Shell

This is a basic implementation of a simple shell in C. This shell is a simple command line prompt that takes the most basics of commands that are present in the bash shell and runs them.

## Usage

In order to run this program,

Clone this repositery : git@github.com:VSayann/holbertonschool-simple_shell.git

Compile the shell using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
You can run this program with this command ./hsh in that same directory.

## Description

This project implements a simple shell in C that supports basic command execution, environment variable display, and shell exit functionality. In order to use this shell, in a terminal, first run the program:
prompt$ ./hsh
It wil then display a simple prompt and wait for commands.
$ 
A command will be of the type $ command.
You will find some exemples of useful command bellow.

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

## List of useful commands

- cat - prints and concatenates files to the standard output
- cp -copies a file into another file
- grep - helps to search for a file in a specific pattern
- less - will let you go backward and forward in the files
- ls - will list all files and directories in current working directory
- mv - helps to move one file into another file
- pwd - given you the current working directory

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
