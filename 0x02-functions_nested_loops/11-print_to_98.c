#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 * 		separated by comma, followed
 * 		by space and number should be printed in order
 *
 * @n: input
 */

void print_tot98(int n)
{
	int cunt;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
