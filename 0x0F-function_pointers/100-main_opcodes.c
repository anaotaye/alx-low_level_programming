#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: argument count
 * @argv: pointer to argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char *oc = (char *) main;
	int nbytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", oc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("/n");
	return (0);
}
