#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - appends text_content to a file
 * @filename: file to modify
 * @text_content: text to append to file
 *
 * Return: (1) if success, (-1) if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w_bytes;
	int fd = open(filename, O_WRONLY | O_APPEND);

	if (!filename || fd < 0)
		return (-1);

	if (text_content)
	{
		w_bytes = write(fd, text_content, strlen(text_content));

		if (w_bytes < 0)
			return (-1);
	}

	return (1);
}
