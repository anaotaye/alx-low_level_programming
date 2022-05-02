#include <stdio.h>

/**
 * main - prints it's name
 * @argc: size of argv array
 * @argv: pointer to array containing the command line arguments
 *
 * Return: 0(success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
