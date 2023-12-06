#include "main.h"

/**
 * create_buffer - Allocates a buffer of a specified size.
 * @size: The size of the buffer to allocate.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(size_t size)
{
    char *buffer = malloc(size);
    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't allocate buffer\n");
        exit(99);
    }
    return buffer;
}

/**
 * open_file - Opens a file with specified flags and mode.
 * @file: The name of the file to be opened.
 * @flags: Flags for opening the file.
 * @mode: Mode for the file if it's created.
 * Return: The file descriptor.
 */
int open_file(const char *file, int flags, mode_t mode)
{
    int fd = open(file, flags, mode);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open %s\n", file);
        exit(98);
    }
    return fd;
}

/**
 * main - Copies the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_bytes, written_bytes;
    char *buffer;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open_file(argv[1], O_RDONLY, 0);
    fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    buffer = create_buffer(1024);

    while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
    {
        written_bytes = write(fd_to, buffer, read_bytes);
        if (written_bytes != read_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (read_bytes == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
        free(buffer);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    free(buffer);
    close_file(fd_from);
    close_file(fd_to);

    return 0;
}
