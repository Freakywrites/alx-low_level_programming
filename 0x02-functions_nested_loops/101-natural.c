#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Return: 0.
 */
int main(void)

{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum = sum + a;
		}
		a + 1;
	}
	printf("%i\n", sum);
	return (0);
}
