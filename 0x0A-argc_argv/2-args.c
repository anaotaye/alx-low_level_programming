#include <stdio.h>

/**
 * main - prints all command line arguments passed into it
 * @argc: length of argv array
 * @argc: pointer to array containing command line arguments
 *
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
