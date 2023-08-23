#ifndef _shell_
#define _shell_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <ctype.h>
#include <sys/stat.h>

#define PROMPT "$saTeams "
#define BUFFER_SIZE 1024
#define COMMAND_SIZE 64
#define END_STRING_CHAR '\0'

extern char **environ;

char **parse_args(char *command);
char *get_env_value(const char *name);
char *get_value_from_env(const char *env);
void free_all(char **command, char *str, char *execute_path);
int custom_isspace(int ch);
void free_string(char *string);
void execute_command(char **command);
int file_exists(const char *filepath);
int find_execute_command(char *command, char *executable_path);


#endif

