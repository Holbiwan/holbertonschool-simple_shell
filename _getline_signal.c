#include "shell.h"

/**
 * _getline_signal - Function to handle signal
 * Return: 0
 */
void _getline_signal(void)
{
	signal(SIGINT, sig_handler);

	while (1)
	{
	sleep(1);
	}
}
