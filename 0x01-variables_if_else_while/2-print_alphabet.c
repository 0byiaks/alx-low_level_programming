#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the program
 * take no arguments, all the statements are in the main function
 *
 * Description: Program that prints alphabets in lower case
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
