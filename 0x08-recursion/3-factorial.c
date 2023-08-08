#include "main.h"

/**
 * factorial - Gets factorial of a number
 * @n:number whose factorial is obtained
 * Return:factorial of a number
 */
int factorial(int n)

{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}

