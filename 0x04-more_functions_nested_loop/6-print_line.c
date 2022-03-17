#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: the number of times the character _
* Return: none;
**/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int o;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
