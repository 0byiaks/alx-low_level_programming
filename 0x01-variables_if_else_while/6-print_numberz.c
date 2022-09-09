#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * Takes no arguments
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

