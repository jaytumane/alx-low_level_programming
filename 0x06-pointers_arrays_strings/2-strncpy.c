#include <stdio.h>
#include <string.h>

/**
 * _strncpy - main function
 * @dest: a string
 * @src: a string
 * @n: a interge
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (int i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (int i = strlen(src); i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
