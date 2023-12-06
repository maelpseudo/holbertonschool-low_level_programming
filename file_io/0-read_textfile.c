#include "main.h"

/**
 * 
 * 
 * 
 * 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
    {
        return 0;
    }

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        return 0;
    }

    char buffer[1024];
    ssize_t total_read = 0, read_bytes = 0, written_bytes = 0;

    while ((read_bytes = read(fd, buffer, sizeof(buffer))) > 0 && total_read < letters)
    {
        written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
        if (written_bytes != read_bytes)
        {
            close(fd);
            return 0;
        }
        total_read += written_bytes;
    }

    if (read_bytes == -1)
    {
        close(fd);
        return 0;
    }

    close(fd);

    return total_read;
}
