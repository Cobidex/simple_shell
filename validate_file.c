#include "main.h"

/**
 * validate_file - validate if the filename exist in directory.
 * @full_path: All enviroment varible PATH of the program
 * @file: name the command of the variable
 * Return: path the file, if executed properly
 **/
char *validate_file(char *full_path, char *file)
{
	struct stat st;
	char *path_name;
	char *token = NULL;
	int i = 0;

	token = strtok(full_path, ":");
	while (token != NULL)
	{
		path_name = malloc((_strlen(token) + _strlen(file) + 2) * sizeof(char));
		if (path_name == NULL)
		{
			free(path_name);
			return (file);
		}
		strcpy(path_name, token);
		strcat(path_name, "/");
		strcat(path_name, file);
		if (stat(path_name, &st) == 0)
		{
			return (path_name);
		}
		free(path_name);
		token = strtok(NULL, ":");
		i++;
	}
	return (NULL);
}
