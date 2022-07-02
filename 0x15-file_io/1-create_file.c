#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Create and write to a new or existing file
 * @filename: file to create and/or modify
 * @text_content: text to write to file
 *
 * Return: (-1) if failed, (1) if successful
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t w_bytes;
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (!filename || fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		w_bytes = write(fd, text_content, strlen(text_content));

		if (w_bytes < 0)
			return (-1);
	}

	return (1);
}
