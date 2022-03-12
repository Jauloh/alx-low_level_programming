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

	if (n > 5)
		printf("%s %d and is %d greater than 5\n", world, n, i);
	if (n == 0)
		printf("%s %d and is %d 0\n", world, n, i);
	if (n < 6)
		printf("%s %d and is  %d is less than 6 and 0\n", world, n, i);
	return (0);
}
	
