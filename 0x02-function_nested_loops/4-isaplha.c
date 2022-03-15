#include <stdio.h>
#include <conio.h>
#include <ctype.h>


/**
 * _isalpha - Shows 1 if the input is a upper case character,
 * 
 * Return: 1 for upper case, 0 otherwise
 */

int _islower(int c)
{
    return (c >= 'A' && c <= 'Z');
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