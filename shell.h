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
/* Global variable */
extern char **environ;

#define PROMPT "$holbiies "
#define BUFFER_SIZE 1024
#define COMMAND_SIZE 64
#define END_STRING_CHAR '\0'

/* ----------String prototype------------*/
char *_strdup(char *str);
char *_strcat(char *first, char *second);
int _strlen(char *str);
char *_strchr(char *str, char c);
int _strcmp(char *s1, char *s2);

char **parse_args(char *command);
char *get_env_value(const char *name);
char *get_value_from_env(const char *env);
void free_all(char **command, char *str, char *execute_path);
int custom_isspace(int ch);
void free_string(char *string);
void execute_command(char **command);
int file_exists(const char *filepath);
int find_execute_command(char *command, char *executable_path);

/*------------strtok prototype-------------*/
char **_strtok(char *str, const char *delim);
#endif
