#include <stdio.h>

/**
 * MAIN -  prints the name of the file it was compiled from, followed by a new line.
 * Return: exit code.
 */ 
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
