#include "main.h"
/**
 * is_prime_number - checks if number is prime
 * @n: the number to be checked
 *
 * is_divisable - checks if n is divisable by a number other than one
 *
 * @di: the number to check n against
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_divisable(int n, int di);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_divisable(n, n / 2));
}
int is_divisable(int n, int di)
{
	if (di == 1)
	{
		return (1);
	}
	if (n % di == 0)
	{
		return (0);
	}
	return (is_divisable(n, di - 1));
}
