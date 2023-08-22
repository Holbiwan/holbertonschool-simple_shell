#include "shell.h"
/*
 * _exit:immediately terminates the process without performing normal cleanup
 *
 * Return: 0
*/

int _exit2(void)
{
	printf("Before _exit\n");
	_exit(0);
	printf("After _exit\n");

	return (0);
}
