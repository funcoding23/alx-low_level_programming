#include "main.h"

/**
 *_islower - function to check if character is lowercase
 *
 *@c: checks input of function
 *
 *return: 1 if c is lowercase, 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	       return (1);
	return (0);
}
