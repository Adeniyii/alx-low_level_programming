#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

void open_files(int *fd_from, int *fd_to, char **av);
void write_file(int fd_from, int fd_to, char **av);
void close_files(int count, ...);

int main(int ac, char **av)
{
	int fd_to;
	int fd_from;
	char *USAGE = "Usage: cp file_from file_to\n";

	if (ac < 3)
	{
		write(STDERR_FILENO, USAGE, strlen(USAGE));
		exit(97);
	}

	open_files(&fd_from, &fd_to, av);
	write_file(fd_from, fd_to, av);
	close_files(2, fd_from, fd_to);

	return (1);
}

void open_files(int *fd_from, int *fd_to, char **av)
{
	*fd_from = open(av[1], O_RDONLY | O_EXCL);
	*fd_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 00664);

	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

void write_file(int fd_from, int fd_to, char **av)
{
	int exit_status;
	ssize_t b_read, b_write;
	int STREAM_SIZE = 1024;
	void *buf = malloc(STREAM_SIZE);

	do
	{
		b_read = read(fd_from, buf, STREAM_SIZE);
		b_write = write(fd_to, buf, b_read);
	} while (b_read > 0 && b_write > 0);

	if (b_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit_status = 98;
	}
	else if (b_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit_status = 99;
	}

	free(buf);
	exit_status ? exit(exit_status) : NULL;
}

void close_files(int count, ...)
{
	int i = 0;
	va_list file_list;

	va_start(file_list, count);

	while (i < count)
	{
		i++;
		int fd = va_arg(file_list, int);
		int status = close(fd);

		if (status < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}
}
