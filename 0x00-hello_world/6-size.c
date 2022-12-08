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

	printf("size of int: %ld bytes\n",sizeof(integerType));
        printf("size of float: %ld bytes\n",sizeof(floatType));
        printf("size of double: %ld bytes\n",sizeof(doubleType));
	printf("size of char: %ld bytes\n",sizeof(charType));

	return (0);
}

