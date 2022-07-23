#include "main.h"

int main(int argc, char **argv)
{
  lsh_loop();

  return 0;
}

void lsh_loop(void)
{
	char *line;
	size_t size = 0;
	int status;
	char *const args[] = {"/bin/ls", NULL};
	
  do {
	printf("> ");
	status = getline(&line, &size, stdin);
	execve("/bin/ls", args, NULL);
	printf("%s",line);

  } while (status);

	
}

