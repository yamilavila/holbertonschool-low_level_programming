#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Print the last number int ln
 *Return: 0
 */

int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ln = n % 10;

	if (ln > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, ln);
	}
	else if (ln == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, ln);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ln);
	}
	return (0);
}
