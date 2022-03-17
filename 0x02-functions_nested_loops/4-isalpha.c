#include "main.h"
/**
 *_ isalpha - checks for alphabetic character
 *@c: take some value from out
 * Return: Always any thing
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
