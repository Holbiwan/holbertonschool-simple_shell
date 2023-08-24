#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H

#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>


int compare(char *string);
char **strtok_helper(char *line, char *delim);
char *_realloc(char *ptr, int old_size, int new_size);
char *_memcpy(char *dest, char *src, unsigned int n);

char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
int _strncmp(char *s1, char *s2, int n);
int _strlen(char *s);

char *pathfinder(char *cmd);
void *getenviron(char *var);

void _printenv(char *s);
int builtin_helper(char *s);
int execute(char *argv, char **tokens, char **__environ);


#endif 
