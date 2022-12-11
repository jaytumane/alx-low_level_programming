#include <stdio.h>

#include <time.h>

/**
 * main - main function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else if (n < 0)
	{
		printf("%d is negagtive\n");
	}

	return (0);
}
