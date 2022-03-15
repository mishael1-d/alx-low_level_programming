#include "main.h"


/**
 * _isalpha - Shows 1 if the input is a upper case character,
 * @c: the character to be checked
 * Return: 1 for upper case, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
