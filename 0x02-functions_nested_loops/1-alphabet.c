#include "main.h"
/**
 * print_alphabet - Prints the alphabet to lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c;
/* print_alphabet */
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
