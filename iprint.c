#include "shell.h"

/**
 * iprint - Acts as printf and prints to the standard output
 * @text: Any message that i want to print
 * Return: Always 0
 */

void iprint(const char *text)
{
	write(STDOUT_FILENO, text, strlen(text));
}
