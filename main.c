#include "main.h"

/**
 * main - shell proyect on simple shell
 * @ac: count arguments in the program
 * @av: store arguments in the program
 * @env: variable envirionment system
 * Return: estatus_exit value; if executed properly
 **/

int main(int ac, char *av[], char **env)
{
	int count_exe = 1, status_exit = 0;
	(void)ac;

	if (ac > 1)
	{
		non_interact(av);
		return (0);
	}
	status_exit = interactive(av, count_exe, env);
	return (status_exit);
}
