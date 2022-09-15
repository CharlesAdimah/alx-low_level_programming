#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: used to get the last digit
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int t;

	t = n % 10;

	_putchar(t + '0');

	return (t);
}
