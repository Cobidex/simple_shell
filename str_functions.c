#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to dest
 * @dest: char dest
 * @src: char src
 * Return: dest, if executed properly.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char a;

	for (i = 0; src[i] != '\0'; i++)
	{
		a = src[i];
		dest[i] = a;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string of the program.
 * @s: pointer to String of a function
 * Return: Nothing on success
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * _strcat - concatenates two strings.
 * @dest: string to destiny
 * @src: string to source
 * Return: Return a concatenate string, if executed properly
 */
char *_strcat(char *dest, char *src)
{
	char *output = NULL;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	len1 = _strlen(dest);
	len2 = _strlen(src);

	output = _calloc(sizeof(char), (len1 + len2 + 1));
	if (output == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (dest)
	{
		while (i < len1)
		{
			output[i] = dest[i];
			i++;
		}
	}
	/*printf("output1 -> %s \n", output);*/
	if (src)
	{
		while (i < (len1 + len2))
		{
			output[i] = src[j];
			i++;
			j++;
		}
	}
	/*printf("output2 -> %s \n", output);*/
	output[i] = '\0';

	return (output);
}

/**
 * _strdup - this functions copy a string.
 * @str: the string to copy a function in a program
 * Description: this function copy a string)?
 * section header: the header of this function is hsh.
 * Return: this is a void function no return, if executed properly
 **/
char *_strdup(char *str)
{
	int j, l;
	char *s;

	if (!str)
	{
		return (NULL);
	}

	l = _strlen(str) + 1;

	s = _calloc(l, sizeof(char));
	if (!s)
	{
		return (NULL);

	}

	for (j = 0; j < l; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
