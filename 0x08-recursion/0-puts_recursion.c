#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: pointer char variable
 * Return: 0
 **/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
	else
	_putchar('\n');
}
