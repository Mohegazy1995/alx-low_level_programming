/*
 * File: 4-print_alphabt.c
 * Author: Mohamed K.Hegazy
 */

#include <stdio.h>

/*
 * main -  prints the alphabet in lowercase, except for e,q
 *
 * Return- Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
