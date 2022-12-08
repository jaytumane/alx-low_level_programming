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

	printf("size of a char: %ld byte(s)\n",sizeof(charType));
        printf("size of an int: %ld byte(s)\n",sizeof(integerType));
        printf("size of a long int: %ld byte(s)\n",sizeof(floatType));
	printf("size of a long long int: %ld byte(s)\n",sizeof(doubleType));
        printf("size of a float: %ld byte(s)\n",sizeof(floatType));

	return (0);
}

