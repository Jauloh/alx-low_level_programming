#include <stdio.h>
/**
* main - Print all possible different combinaisin
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n1 = 48;
	int n2;
	int compt = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56 || n2 != 57)
			{
				putchar(compt);
				putchar(32);
			}
			n2 += 1;
		}
		n1 += 1;
		}
	putchar('\n');
	return (0);
}
