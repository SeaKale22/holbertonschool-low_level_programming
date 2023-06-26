#include <stdio.h>
/**
 * main- prints name of file it was complied from
 *
 * Return: Always zero
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
