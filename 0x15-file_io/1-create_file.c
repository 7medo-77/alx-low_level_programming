#include "main.h"

/**
 * create_file - Function that creates a file
 *
 * @filename: File-name assigned
 * @text_content: Content to be written to file
 *
 * Return: 1 ( success )
 *		  -1 ( failure )
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_byte, read_byte = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
