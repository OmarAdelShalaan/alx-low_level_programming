#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stout
 * @filename: pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t o, r, w;
    char *buf = NULL;

    if (filename == NULL)
    {
        return (0);
    }
    buf = (char *)malloc(letters);
    if (buf == NULL)
		return (0);
    o = open(filename, O_RDONLY);
    r = read(filename, buf, letters);
    w = write(STDOUT_FILENO, buf, letters);
    close(o);
    free(buf);
    if (r == -1 || w == -1)
    {
        return (0);
    }
    return (w);
}
