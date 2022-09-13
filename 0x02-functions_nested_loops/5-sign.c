#include "main.h"
/**
 * print_sign - function that prints a sign of number
 *
 * @n: it is the  variable being compared
 * Return: Always 1, 0, -1
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
