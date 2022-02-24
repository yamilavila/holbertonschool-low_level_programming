#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - function returns the nonnegative square root of x.
 * @n: # to check
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (_square_root(n, 1));
}

/**
 * _square_root - square root of a given number
 * @n: number
 * @dst: varable
 * Return: n
 */

int _square_root(int n, int dst)
{
	if (dst * dst == n)
{
		return (dst);
	}
	if (dst * dst > n)
	{
		return (-1);
	}
	return (_square_root(n, dst + 1));
}
