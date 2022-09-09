#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point of the program
 * Takes no arguments, all statements are in the main function
 *
 * Description: Program that prints alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
