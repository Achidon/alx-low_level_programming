#include "main.h"
/**
 * main - Entry point
 *
 * Descrption: This is a function that turns the letters of the  lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
