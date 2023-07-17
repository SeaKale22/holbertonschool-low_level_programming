#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * append_text_to_file- appends to an existing file
 * @filename: name of file to be made
 * @text_content: string to write to file
 *
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t text_len = 0;
	ssize_t write_chars = 0;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
		write_chars = write(file_des, text_content, text_len);
	}
	close(file_des);
	return (write_chars == text_len ? 1 : -1);
}
