#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Alwyas 0.
 *
 */

int main(void)
{
	print_alphabet( );

	return (0);
}


/**
 * print_alphabet - writes the character c to stdout
 *
 *
 * Return: void
 *
 */

void print_alphabet(void )
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putcha('\n');

}

