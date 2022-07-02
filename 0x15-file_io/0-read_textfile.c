#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - print file contents to stdout
 * @filename: name of file to read from
 * @letters: no of bytes to write to stdout
 *
 * Return: ssize_t no of bytes written to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t r_bytes, w_bytes;

	int fd = open(filename, O_RDWR, 0600);

	if (!filename || fd < 0)
		return (0);

	buf = (char *)malloc(letters);
	r_bytes = read(fd, buf, letters);

	if (r_bytes < 0)
		return (0);

	w_bytes = write(STDOUT_FILENO, buf, (size_t)r_bytes);

	if (w_bytes < 0)
		return (0);

	free(buf);
	close(fd);
	return (w_bytes);
}
