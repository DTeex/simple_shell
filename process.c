#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main (void)
{
	pid_t child_process;
	
	pid_t parent_process;

	child_process = getpid();

	parent_process = getppid();

	printf("Child process: %u\n", child_process);

	printf("Parent process: %u\n", parent_process);

	return (0);
}
