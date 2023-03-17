/*
 * File: 8-print_base16.c.
 * Author: Mohamed K.Hegazy.
 *
 **/
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char HexLetter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (HexLetter = 'a'; HexLetter <= 'f'; HexLetter++)
		putchar(HexLetter);

	putchar('\n');

	return (0);
}
