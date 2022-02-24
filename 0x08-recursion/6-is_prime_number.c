#include "main.h"
/**
 * is_prime_number - 1 that is not a product of two smaller natural numbers.
 * @n: integer
 * Return: returns 1
 */

int is_prime_number(int n)
{
	int dst = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, dst));
}

/**
 * prime_check - number is prime or not
 * @n: input
 * @dst: interate to get prime
 * Return: -1 if dst is less than 1
 */

int prime_check(int n, int dst)
{
	if (n % dst == 0)
	{
		return (0);
	}
	if (dst > n / 2)
	{
		return (1);
	}
	return (prime_check(n, dst + 1));
}
