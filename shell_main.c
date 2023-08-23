#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <ctype.h>


#define PROMPT "$saTeam "
#define BUFFER_SIZE 1024
#define COMMAND_SIZE 64
#define END_STRING_CHAR '\0'

int file_exists(const char *filepath);
int find_execute_command(char *command, char *executable_path);
int custom_isspace(int ch);
char *_strdup(char *str);
char *_strcat(char *first, char *second);
int _strlen(char *str);
char *_strchr(char *str, char c);
int _strcmp(char *s1, char *s2);

char **parse_args(char *command);
char *get_env_value(const char *name);
char *get_value_from_env(const char *env);

char **_strtok(char *str, const char *delim);
void free_all(char **command, char *str, char *execute_path);
extern char **environ;
int _isspace(int ch);
void free_string(char *string);
void execute_command(char **command);

#endif
