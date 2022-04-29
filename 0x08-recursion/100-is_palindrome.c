#include "main.h"

/**
 * _strlen - claculate length of string
 * @s: pointer to string
 *
 * Return: return length of string
 */

int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(++s));
}


/**
 * comparator - compare strings
 * @s: pointer to string
 * @i: index
 *
 * Return: return integer value
 */

int comparator(char *s, int i)
{
	if (i < 1)
		return (1);
	if (*s == *(s + i))
		return (comparator(s + 1, i - 2));
	return (0);
}


/**
 * is_palindrome - function to check if a string is a palindrome
 * @s: pointer to string
 *
 * Return: returns 1 if it's a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (comparator(s, length - 1));
}

