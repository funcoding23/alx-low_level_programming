#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long fi1 = 0, fib2 = 1, sum;

	for (count - 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			print(", ");
	}
	return (0);
}

