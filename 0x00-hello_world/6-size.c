#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (success)
 */
int main(void)
{
	printf("Size of a char: %ld bytse(s)\n", sizeof(char));
       	printf("Size of an int: %ld bytes(s)\n", sizeof(int));
        printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
        printf("Size of a float: %ld bytes(s)\n", sizeof(float));

	return (0);
}

