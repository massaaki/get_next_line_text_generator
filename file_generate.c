#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int fd = open("out_file.txt", O_WRONLY | O_CREAT | O_APPEND);
	char *text = "This is just a test\nfor get next line\nhere we go!\n";

	if (fd == -1)
	{
		printf("Error to open file\n");
		return (-1);
	}

	printf("length(with \\n)..: %zu\n", strlen(text));

	write(fd, text, strlen(text));
	close(fd);

	return (0);
}