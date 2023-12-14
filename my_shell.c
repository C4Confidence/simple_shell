#include "shell.h"

/**
 * main - check the code
 * @ac: character
 * 
 * @env: environment variable
 *
 * Return: Always 0
 */

int main(int ac, char **env)
{
	if (ac == 1)
		iprompt(env);
	return (0);
}
