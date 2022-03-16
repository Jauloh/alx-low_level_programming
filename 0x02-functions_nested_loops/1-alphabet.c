#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
