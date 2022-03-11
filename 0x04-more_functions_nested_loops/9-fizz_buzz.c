#include <stdio.h>

/**
 * main - Print 1 - 100 but for 3 print Fizz/ 5 print Buzz
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
