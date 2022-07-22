#include <stdio.h>
/**
 * main - print all args
 * @argc: number of command line arguments
 * @argv: array that contain the program command
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
		printf("%s\n", argv[g]);
	return (0);
}
