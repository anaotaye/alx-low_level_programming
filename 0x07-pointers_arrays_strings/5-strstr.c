#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to string to search
 * @needle: pointer to substring
 *
 * Return: returns pointer to beginning of located string or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
