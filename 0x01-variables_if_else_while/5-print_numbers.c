#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		if (x < 9)
		{
			printf("%d", x);
		}
		x++;
	}
	printf("\n");
	return (0);
}
