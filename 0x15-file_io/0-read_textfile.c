#include "main.h"

/**
 * read_textfile - Read from a file and print to stdout
 *
 * @filename: Name of the file
 * @letters: the number of letters to read
 *
 * Return: Number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	int index, index_2;
	char *buffer_arr;

	if (!filename)
		return (0);
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor < 0)
		return (0);
	buffer_arr = malloc(sizeof(char) * letters);

	if (!buffer_arr)
		return (0);
	index = read(file_descriptor, buffer_arr, letters);

	if (index < 0)
	{
		free(buffer_arr);
		return (0);
	}

	buffer_arr[index] = '\0';
	close(file_descriptor);
	index_2 = write(STDOUT_FILENO, buffer_arr, index);

	if (index_2 < 0)
	{
		free(buffer_arr);
		return (0);
	}
	free(buffer_arr);
	return (index_2);
}
