`#include "shell.h"

/**
 * iprompt - This displays the prompt
 * @av: average variable
 * @env: environment variable
 * Return: Always 0
 */

void iprompt(char **av, char **env)
{
	char *str = NULL;
	int p, status;
	size_t n = 0;
	ssize_t char_num;
	char *argv[] = {NULL, NULL};
	pid_t child_pid;

	while (1)
	{
		if (isatty(STDIN_FILENO))
	iprint("Wagwan$ ");

	char_num = getline(&str, &n, stdin);
	if (char_num == -1)
	{
		free(str);
		exit(EXIT_FAILURE);
	}
	p = 0;
	while (str[p])
	{
		if (str[p] == '\n')
			str[p] = 0;
	i	p++;
	}
	argv[0] = str;
	child_pid = fork();
	if (child_pid == -1)
	{
		free(str);
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, env) == -1)
			printf("%s: No such file or directory\n", av[0]);
		exit(EXIT_FAILURE);
	}
	else
		wait(&status);
	}
}
