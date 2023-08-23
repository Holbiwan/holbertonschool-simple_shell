#include "shell.h"

/**
 * _exit_program - Terminates the process after printing a message.
 * Return: This function does not return
**/

void _exit_program(void)
{
	printf("Before _exit\n");
	_exit(0);
}
