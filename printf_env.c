#include "main.h"
/**
 * print_env - print variable global envirionment of that program
 * @env: variable global envirionment system
 * Return: estatus_exit value, if executed properly;
 **/

void print_env(char **env)
{
	int i = 0;

	for (i = 0; env[i] != NULL; i++)
	{
		write(STDOUT_FILENO, env[i], strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
