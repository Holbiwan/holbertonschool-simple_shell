#ifndef SHELL_H
#define SHELL_H
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stddef.h>
#define DELIMIT " \t\r\n\a"
#define PROMPT "$sa_team "
#define SIZE 1024
#define PATH_MAX 1020

extern char **environ;
int _getline(char **string, size_t *size);
int main(void);
int _strtok(void);
void _exit_program(void);
int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
void _fork(void);
void sig_handler(int signum);
int _stat(int ac, char **av);
int _putchar(char c);
int parse_string(char *str, const char *token);
#endif
