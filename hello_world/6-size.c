#include <stdio.h>
/**
 * main - does a thing
 *
 * Return: nothing
 *
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));

	return (0);
}