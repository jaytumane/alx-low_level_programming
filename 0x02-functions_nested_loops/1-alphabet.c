#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - a function thhats prints lower case alphabet
 *
 * Return: 0 Always (success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z' ; n++)
	{
		_putchar(n);
	}

	putchar('\n');
}
