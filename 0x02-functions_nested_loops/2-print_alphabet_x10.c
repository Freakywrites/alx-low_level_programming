#include "main.h"
/**
 * print alphabet x10 -> prints the lowercase letters
 *
 * return: Always 0 (Success)
 **/

void print_alphabet_x10(void);
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
