#include "main.h"
/**
* create_file - creates a file
* @filename: name of a text file
* @text_content: content of file
* Return: 1
* On error, 0 is returned.
*/

int create_file(const char *filename, char *text_content)
{
	int fd, t, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		t = write(fd, text_content, i);
		if (t != i)
			return (-1);
	}

	close(fd);

	return (1);
}
