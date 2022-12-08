#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (success)
 */
int main(void)
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;

	printf("Size of a char: %ld byte(s)\n",sizeof(charType));
        printf("Size of an int: %ld byte(s)\n",sizeof(integerType));
        printf("Size of a long int: %ld byte(s)\n",sizeof(floatType));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(doubleType));
        printf("Size of a float: %ld byte(s)\n",sizeof(floatType));

	return (0);
}

