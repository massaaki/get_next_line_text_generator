#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int fd_read = open("out_file.txt", O_RDONLY);
	char c;

	if (fd_read == -1)
	{
		printf("error to open read file");
	}

	printf("\n\n*******************************\n");
	while ((read(fd_read, &c, sizeof(c)) > 0))
	{
		// if (c == '\n')
		// 	printf("found!\n");
		write(1, &c, sizeof(c));
		// write(1, "\n", 1);
	}
	printf("\n*******************************\n\n");
	close(fd_read);

	return (0);
}
