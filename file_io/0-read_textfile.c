#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile- reads a textfile and prints to stoandard output
 * @filename: File to be read
 * @letters: number of letters to be read and print
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_des, read_chars, write_chars;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
	{
		free(buffer);
		return (0);
	}
	read_chars = read(file_des, buffer, letters);
	if (read_chars == -1)
	{
		free(buffer);
		close(file_des);
		return (0);
	}
	write_chars = write(STDOUT_FILENO, buffer, read_chars);
	if (write_chars == -1 || read_chars != write_chars)
	{
		free(buffer);
		close(file_des);
		return (0);
	}
	free(buffer);
	close(file_des);
	return (write_chars);
}
