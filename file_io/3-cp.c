#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * file_cp- copies contents of a file to another file
 * @file_from: sorce file
 * @file_to: dest file
 *
 * Return: 1 on success, 97 - 100 for error
 */
int file_cp(const char *file_from, const char *file_to)
{
	char buffer[1024];
	int file1_des, file2_des;
	ssize_t read_chars, write_chars;

	file1_des = open(file_from, O_RDONLY);
	if (file1_des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	file2_des = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file2_des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(file1_des);
		return (99);
	}
	while ((read_chars = read(file1_des, buffer, sizeof(buffer))) > 0)
	{
		write_chars = write(file2_des, buffer, read_chars);
		if (write_chars != read_chars)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(file1_des);
			close(file2_des);
			return (99);
		}
	}
	if (read_chars == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(file1_des);
		close(file2_des);
		return (98);
	}
	if (close(file1_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1_des);
		return (100);
	}
	if (close(file2_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2_des);
		return (100);
	}
	return (1);
}
/**
 * main- calls file_cp
 * @ac: arg count
 * @av: args vectors
 *
 * Return: 0, else 97-100 for error
 */
int main(int ac, char **av)
{
	int cpres;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		return (97);
	}
	cpres = file_cp(av[1], av[2]);
	if (cpres != 1)
		return (cpres);
	return (0);
}
