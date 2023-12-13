#include "shell.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	char com[140];

	while (1)
	{
		iprompt();
		read_com(com, sizeof(com));
		execute_com(com);
	}

	return (0);
}
