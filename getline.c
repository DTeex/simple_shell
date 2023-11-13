#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

int main(void)
{
	char *lineptr = NULL;

	size_t n;

	ssize_t get_line_val;

	char *token;

	char *command_args[10];

	while (1)
	{
		printf("Shell) $ ");
		
		get_line_val = getline(&lineptr, &n, stdin);

		if (get_line_val == EOF || get_line_val == -1)
		{
			//perror("getline Failed");
			free(lineptr);
			exit(0);
		}

		//printf("%s\n", lineptr);
		int i = 0;

		token = strtok(lineptr, "\n\t");

		while(token != NULL && i < 10)
		{
			command_args[i] = strdup(token); /*Populate the array with the tokens*/
			token = strtok(NULL, " \n\t");

			i += 1;
		}

		command_args[i] = NULL;

		int j;

		for (j = 0; j < 10; j++)
		{
			printf("%s\n", command_args[j]);
			free(command_args[j]);
		}
	}
	
	free(lineptr);
	return (0);
}
