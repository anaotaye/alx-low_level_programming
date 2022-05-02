#include <stdio.h>

/**
 * main - program to print the number of command line arguments passed to it
 * @argc: size of argv array
 * @argv: pointer to array of command line arguments
 *
 * Return: 0(success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
