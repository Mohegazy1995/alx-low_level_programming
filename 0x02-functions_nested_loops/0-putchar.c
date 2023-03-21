/**
 * File: 0-putchar.c.
 * Author: Mohamed K.Hegazy.
 *
 **/
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always return 0.
 **/

int main(void)
{
	putchar_Print();

	return (0);

}

/**
 * putchar_Print: that function for print _putchar
 *	on screen followed by a new line.
 *
 * Return: nothing void.
 *
 **/

void putchar_Print (void)
{
	printf("_putchar\n");
}
