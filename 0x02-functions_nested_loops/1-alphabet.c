#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
 *
 * return: Always 0 (Success)
 **/

void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
