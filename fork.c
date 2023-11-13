#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main (void)
{
	pid_t fork_value;

	int i = 0;

	int status;

	while (i < 4)
	{
		fork_value = fork();

		if (fork_value == -1) /*Fork failed*/
		{
			perror("Fork Failed");
			exit(EXIT_FAILURE);
		}

		if (fork_value == 0) /*Child process*/
		{
			printf("This is the child process\n");
		}
		else /*Parent process*/
		{
			printf("This is the parent process\n");
			wait(&status);
		}
		i++;
	}

	return (0);
}
