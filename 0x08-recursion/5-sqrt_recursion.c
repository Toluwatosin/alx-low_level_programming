#include "main.h"
/**
 * square - function
 * _sqrt_recursion - funtion that returns square root
 * @n: int variable
 * @cal: indirect recursive function
 * Return: values && -1
 **/
int square(int n, int cal)
{
	if (cal * cal == n)
	return (cal);
	if (cal * cal < n)
	return (square(n, cal + 1));
	return (-1);
}
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
