#include <string.h>
#include <stdio.h>

/**
 * _strcat - main function
 * @dest: a string
 * @src: a string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest + strlen(dest);

	strcpy(dest_end, src);

	return (dest);
}
