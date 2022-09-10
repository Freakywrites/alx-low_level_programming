#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
**/

int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (a != b && b > a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
