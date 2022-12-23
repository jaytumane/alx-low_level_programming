#include <stdio.h>
#include <string.h>
/**
 * _strncat - main function
 * @dest: a string
 * @src: a string
 * @n: an number container
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest + strlen(dest);

	strncpy(dest_end, src, n);

	*(dest_end + n) = '\0';

	return (dest);
}
