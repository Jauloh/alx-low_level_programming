#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 * Followed by a new line
 * Return: Always 0 (success)
*/
int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != e && c != q)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
