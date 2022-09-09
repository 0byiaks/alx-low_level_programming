#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 * takes no arguments, all statements are int he main functions
 * Description: Program that prints alphabets in lower case
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
