#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * @brief print file contents to stdout
 * @filename: name of file to read from
 * @letters: no of bytes to write to stdout
 *
 * Return: ssize_t no of bytes written to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	size_t r_bytes;
	int fd = open(filename, O_RDWR, 0600);

	if (!filename || fd < 0)
	{
		return (0);
	}

	buf = (char *)malloc(letters);
	read(fd, buf, letters);
	r_bytes = write(STDOUT_FILENO, buf, letters);

	if (r_bytes != letters)
	{
		return (0);
	}

	free(buf);
	close(fd);
	return (r_bytes);
}
