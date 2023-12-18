#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stout
 * @filename: pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
        size_t lettersCountRead = 0;
        size_t lettersCountWrite = 0;
        int fileD = 0;
        char *buf = (char *)malloc(letters);
if (filename == NULL)
        {
                return (0);
        }

        fileD = open(filename, O_RDONLY);
        lettersCountRead = read(filename, buf, letters);
        lettersCountWrite = write(filename, buf, lettersCountRead);
        close(fileD);
        free(buf);
if (lettersCountWrite != lettersCountRead)
        {
                return (0);
        }
        return (letters);
}
