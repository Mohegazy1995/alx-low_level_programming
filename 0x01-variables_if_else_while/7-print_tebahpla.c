/*
 * File: 7-print_tebahpla.c.
 * Author: M0ohamed K.Hegazy.
 **/

#include <stdio.h>

/**
 * main-  prints the lowercase alphabet in reverse,
 * 	You can only use the putchar function.
 * 
 * Return: Always 0.
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	
		putchar(rev);
	putchar('\n');

	return (0);

}
