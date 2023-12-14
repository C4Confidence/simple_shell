#include "shell.h"

/**
 * main - check the code
 * @ac: character
 * @av: average variable
 * @env: environment variable
 *
 * Return: Always 0
 */

int main(int ac, char **av, char **env)
{
	if (ac == 1)
		iprompt(av, env);
	return (0);
}
