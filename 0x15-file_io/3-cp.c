#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * copy_func - copy content of files
 *
 * @file_from: first file discreptor
 * @file_to: second file discreptor
 * @buff_from: first file name
 * @buff_to: second file name
 *
 */
void copy_func(int file_from, int file_to, char *buff_from, char *buff_to)
{
	int printed, flag;
	char *buff[1024];

	printed = read(file_from, buff, 1024);
	if (printed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", buff_from);
		exit(98);
	}
	while (printed)
	{
		flag = write(file_to, buff, printed);
		if (flag != printed)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buff_to);
			exit(99);
		}
		printed = read(file_from, buff, 1024);
		if (printed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", buff_from);
			exit(98);
		}
	}
}

/**
 * close_file_d - closes files
 * @fd: file discreptor to be closed
 */

void close_file_d(int fd)
{
	int flag;

	flag = close(fd);
	if (flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A function that copies content from one file to another
 *
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy_func(file_from, file_to, argv[1], argv[2]);
	close_file_d(file_from);
	close_file_d(file_to);
	return (0);
}
