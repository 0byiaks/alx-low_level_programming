#include <stdio.h>
#include <stdlib.h>

/**
 * main- the Entry point of the program
 * The program Takes no arg.
 *
 * Description: prints a-z and A-Z using a for loop
 * Return: program always return 0(success)
 */
int main(void)
{
	char cl;
	char cu;

	for (cl = 'a'; cl <= 'z'; cl++)
	{
		putchar(cl);
	}
	for (cu = 'A'; cu <= 'Z'; cu++)
	{
		putchar(cu);
	}
	putchar('\n');
	return (0);
}
