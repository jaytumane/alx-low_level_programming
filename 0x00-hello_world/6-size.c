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

	printf("size of char: %ld byte(s)\n",sizeof(charType));
        printf("size of int: %ld byte(s)\n",sizeof(integerType));
        printf("size of long int: %ld byte(s)\n",sizeof(floatType));
	printf("size of long long int: %ld byte(s)\n",sizeof(doubleType));
        printf("size of float: %ld byte(s)\n",sizeof(floatType));

	return (0);
}

