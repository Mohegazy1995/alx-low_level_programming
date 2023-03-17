/*
 * File: 9-print_comb.c
 * Author: Mohamed K.Hegazy.
 **/

#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits.
 * Return: Always 0. 
 */

int main(void)
{
	int numComb;

	for (numComb = 0; numComb <= 9; numComb++)
	{
		putchar((numComb % 10) + '0');
		if (numComb == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
