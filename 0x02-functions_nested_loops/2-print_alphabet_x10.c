#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in ten times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
