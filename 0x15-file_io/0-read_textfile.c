#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *			to the POSIX standard output
 * @letters: number of letters it should read and printf
 * Return: actual number of letters it could read and print
 * return: if the file can not be opened or read
 * @filename: text file
 * Return: if write fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t D, P, R;
	char *buf;

	P = open(filename, O_RDONLY);
	if (P == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	D = read(P, buf, letters);
	R = write(STDOUT_FILENO, buf, D);
	free(buf);
	close(P);
	return (R);
}
