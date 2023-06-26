#include <stdio.h>
/**
 * main- prints name of file it was complied from
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
