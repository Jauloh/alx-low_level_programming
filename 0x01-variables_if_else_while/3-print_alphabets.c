#include <stdio.h>
/**
 * main - Print thz alphabet in lowercase; and then in uppercase
 * followed by a new line
 * Return: Always 0 (success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
