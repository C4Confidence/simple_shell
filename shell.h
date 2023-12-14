#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int add(int n1, int n2);
void iprompt(char **env);
void iprint(const char *text);
void read_com(char *com, size_t size);
void execute_com(const char *com);

#endif
