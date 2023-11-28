#include "main.h"
#include "stdio.h"
/**
 * read_textfile - Function to read from file and print to stdout
 *
 * @filename: File to be opened
 * @letters: Number of letters to be read
 *
 * Return:
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
		FILE *file_1;
		char buffer[letters + 1];
		ssize_t out_put;

		file_1 = fopen(filename, "r");
		while (fgets(buffer, letters + 1, file_1) != 0)
		{
				out_put = fwrite(buffer, sizeof(char), 1024, stdout);
		}
		return (out_put);
}
