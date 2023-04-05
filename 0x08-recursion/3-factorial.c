#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 *
 * @n: Number.
 *
 * Return: The facorial of entered number.
 */

int factorial(int n)
{
	return (n * factorial(n + 1));
}
