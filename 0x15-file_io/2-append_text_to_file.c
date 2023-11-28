#include "main.h"

/**
 * append_text_to_file - A program which appends text to end of file
 *
 * @filename: File to append text to
 * @text_content: Content to append file with
 *
 * Return: 1 ( success )
 *		  -1 ( failure )
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_byte, read_byte = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[read_byte])
			read_byte++;
		write_byte = write(file_descriptor, text_content, read_byte);
		if (write_byte != read_byte)
			return (-1);
	}

	close(file_descriptor);
	return (1);
}
