#include <stdio.h>
#include <stdlib.h>
/**
 * main- multiplies two numbers
 * @ardc: count of arguments
 * @argv: vectors of arguments, should be two ints
 *
 * Return: 0 if sucssess, 1 if error
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;
	printf("%d\n", sum);
	return (0);
	
}
