#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase
 * print_alphabet - new function
 * followed by a new line
 * Return: Always 0
 */
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
