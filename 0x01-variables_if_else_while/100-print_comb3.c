/**
 * File: 100-print_comb3.c.
 * Author: Mohamed K.Hegazy.
 *
 **/

#include <stdio.h>

/*
 * main - prints all possible different combinations of two digits.
 * Return: Always 0.
 **/

int main(void)
{
	int NumComb1, NumComb2;

	for (NumComb1 = 0; NumComb1 < 9; NumComb1++)
	{
		for (NumComb2 = NumComb1 + 1; NumComb2; < 10; NumComb2++)
		{
			putchar((NumComb1 % 10) + '0');
			putchar((NumComb2 % 10) + '0');

			if (NumComb1 == 8 && NumComb2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
