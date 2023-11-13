#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		if (strcmp(argv[i], "ls") == 0)
		{
			printf("You typed a valid command ");
			printf("%s\n", argv[i]);
		}
		printf("argv[%d]: %s\n", i, argv[i]);

		i += 1;
	}

	return (0);
}
