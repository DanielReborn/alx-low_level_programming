/*
 * File_name: 3-cp.c
 * Created: 27th of May, 2023
 * Auth: Oni Ajibola Taiwo
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include "main.h"
#include <stdio.h>
/**
  * main - Write a program that copies the content of a file to another file
  * @ac: argument count
  * @av: array of argument tokens
  * Return: Always 0. (Success)
  */
int main(int ac, char *av[])
{
	int taken_from, taken_to, started, begin;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	taken_from = open(av[1], O_RDONLY);
	if (taken_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	taken_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (taken_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	started = 1;
	while (started)
	{
		started = read(taken_from, buffer, BUFSIZE);
		if (started == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (started > 0)
		{
			begin = write(taken_to, buffer, started);
			if (begin != started || begin == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(taken_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", taken_from), exit(100);
	if (close(taken_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", taken_to), exit(100);
	return (0);
}
