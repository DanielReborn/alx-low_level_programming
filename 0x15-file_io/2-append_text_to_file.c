/*
 * File_name: 2-append_text_to_file.c
 * Created: 27th of May, 2023
 * Auth: Oni Ajibola Taiwo
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int text_file;
	ssize_t length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	text_file = open(filename, O_WRONLY | O_APPEND);
	if (text_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		length = write(text_file, text_content, inlen);
	}

	if (close(text_file) == -1 || inlen != length)
		return (-1);
	return (1);
}
