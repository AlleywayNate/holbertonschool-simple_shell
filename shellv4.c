#include "main.h"

int main(int argc, char **argv)
{
	Mr_Frog();

  return 0;
}

void Mr_Frog(void)
{
	int a;
	int test;
	pid_t child_pid;
	char *line;
	size_t size = 0;
	int status;
	char *const args[] = {"/bin/ls", "-l", NULL};
	
  do {
	printf("> ");
	status = getline(&line, &size, stdin);
	printf("%s", line);
	for (a = 0; line[a] != '\0' ; a++)
	{
		if (line[a] == '\n')
		{
			line[a] = '\0';
		}
	}
	for (a = 0; line[a]
	child_pid = fork();
	if (child_pid == 0)
	{
		execve(line, args, NULL);
	}
	else {
		do {
			waitpid(child_pid, &test, WUNTRACED);
		} while (WIFEXITED(test) == 0 && WIFSIGNALED(test) == 0);
	}
  } while (status);
}
