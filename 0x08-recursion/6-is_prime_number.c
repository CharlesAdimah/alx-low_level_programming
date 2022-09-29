#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	int s = n/2;

	if (n <= 1)
		return (0);
	return (is_prime_number(n, s));
}

/**
 * is_prime - return the 1 if n is prime
 * @n: number to be checked
 * @s: number to start the check from
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime(int n, int s)
{
	if (s <= 1)
		return (1);
	else if (n % s == 0)
		return (0);

	return (is_prime(n, s - 1));
}
