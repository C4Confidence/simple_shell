#include "shell.h"

/**
 * read_com - function that will read the command
 * @com: command string that recieves command
 * @size: size of the string
 * Return: Always 0
 */

void read_com(char *com, size_t size)
{
	if (fgets(com, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			iprint("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			iprint("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	com[strcspn(com, "\n")] = '\0';
}
