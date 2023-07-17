#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main- calles file_cp
 * 
 * Return: always 0
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Useage: cp file_from file_to\n");
		exit(97);
	}
	res = file_cp(av[1], av[2]);
	if (res == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (res == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	else if (res == 100)
	{
		exit(100);
	}
	else 
		exit(0);
}
/**
 * file_cp- copies content of a file to another file
 * @file_from: sorce file
 * @file_to: des file
 *
 * Return: 1 if successful
 */
int file_cp(const char *file_from, const char *file_to)
{
	char *buffer;
	int file1_des, file2_des;
	ssize_t read_chars, write_chars;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (file_from == NULL || file_to == NULL)
		return (97);
	file1_des = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file1_des == -1)
		return (98);
	file2_des = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file2_des == -1)
	{
		close(file1_des);
		return (99);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		close(file1_des);
		close(file2_des);
		return (99);
	}
	while ((read_chars = read(file1_des, buffer, 1024)) > 0)
	{
		write_chars = write(file2_des, buffer, read_chars);
		if (write_chars != read_chars)
		{
			free(buffer);
			close(file1_des);
			close(file2_des);
			return (99);
		}
	}
	if (read_chars == -1)
	{
		free(buffer);
		close(file1_des);
		close(file2_des);
		return (98);
	}
	free(buffer);
	if (close(file1_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file1_des);
		return (100);
	}
	if (close(file2_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2_des);
		return (100);
	}
	return (1);
}
