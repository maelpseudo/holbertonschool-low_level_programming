#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, j;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (j = 0; text_content[j] != '\0'; j++)
		{
		}
		write(fd, text_content, j);
	}
	close(fd);
	return (1);
}
