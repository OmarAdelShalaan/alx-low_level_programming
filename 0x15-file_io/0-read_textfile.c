#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
    {
        return (0);
    }
    size_t lettersCountRead = 0;
    size_t lettersCountWrite = 0;
    int fileD = 0;
    char *buf = (char*)malloc(letters);

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