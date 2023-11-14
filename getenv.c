#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char *homevalue = getenv("HOME");

	printf("%s\n", homevalue);
}
