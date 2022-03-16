#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet, in lowercase
 * followed by a new line
 * Return: Any thing
 */
void print_alphabet_x10(void)
{
	int i = 0, n;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
			_putchar('\n');
		}
		i++;
	}
}
