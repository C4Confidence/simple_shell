#include "shell.h"

/**
 * execute_com - This is a function that will be able to execute command
 * that displays the prompt
 * @com: command
 * Return: Always 0
 */

void execute_com(const char *com)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(com, com,  (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
