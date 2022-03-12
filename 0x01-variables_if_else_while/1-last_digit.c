#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n, i;
	char world[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
		printf("%s %d is %d and is  greater than 5\n", world, n, i);
	if (i == 0)
		printf("%s %d is %d and is 0\n", world, n, i);
	if (i < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", world, n, i);
	return (0);
}	
