#include "main.h"
/**
 * prime - function
 * is_prime_number - function
 * @n: int
 * @i: int
 * Return: value 1 and 0
 */
int prime(int n, int i)
{
	if (i > 9)
	return (1);
	else if (n % i != '\0')
	return (prime(n, ++i));
	return (0);
}
 /**
  * is_prime_number - function check if its prime
  * @n: int
  * Return: prime
  */
int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
	return (0);
	return (prime(n, 2));
}
