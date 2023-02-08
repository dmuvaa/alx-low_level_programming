#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#define BUFF 1024

/**
 * File_s - struct to hold content and length info for new file
 * @content: string to add to file
 * @length: lenth of content
 */

typedef struct File_s
{
	char *content;
	size_t length;
} File_t;

#endif
