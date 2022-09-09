#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Entry point
 *
 * Return:always 0 (Success)
 **/

int main(void)
{
	int f;
	char lower;

	for (f = '0'; f <= '9'; f++)
		putchar(f);
	for (lower = 'a' ; lower <= 'f'; lower++)
		putchar(lower);
	putchar ('\n');
	return (0);
}
