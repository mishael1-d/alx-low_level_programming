#include <stdio.h>
#include <conio.h>
#include <ctype.h>

/**
 * _islower - Shows 1 if the input is a lower case character,
 * 
 * Return: 1 for lower case, 0 otherwise
 */

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int main(void)
{
    int r;
    r = _islower('h');
    putchar(r + '0');
    r = _islower('H');
    putchar(r + '0');
    r = _islower(100);
    putchar(r + '0');

    return (0);
}