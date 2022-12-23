#include <stdio.h>
#include <string.h>
/**
 * _strcmp -main function
 * @s1: integer
 * @s2: integer
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 < *s2) ? -1 : 1;
		}
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	return (*s1 == '\0') ? -1 : 1;
}
