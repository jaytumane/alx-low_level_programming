#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int x = 97, y = 122;

	while (x <= y)
	{
		putchar(x);
		x++;
	}

	x = 65;
	y = 90;

	while (x <= y)
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
