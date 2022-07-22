#include <stdio.h>
/**
 * main - print the number of arg pass to it
 * @argc: number of ar
 * @argv: array that contain cmd
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
