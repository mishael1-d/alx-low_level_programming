#include <stdio.h>

/**
 * print_alphabet - Print the alphabet in lowercase
 * 
 * Return: void
 */

void print_alphabet(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
    return;
}
int main(void)
{
    print_alphabet();
    return (0);
}