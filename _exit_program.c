#include "shell.h"

/**
 * _exit2:Terminates the process after printing a message
 * Return: 0
**/

int _exit_program(void)
{
	printf("Before _exit\n");
	_exit(0);

	printf("After _exit\n");

	return (0);
}
