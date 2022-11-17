#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the opcode
 * @argc: The number of arg
 * @argv: an array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*add)(int, char**) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");

		add++;
	}

	printf("\n");

	return (0);
}
