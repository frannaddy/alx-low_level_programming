#include "main.h"

/**
 * puts2- should print everyother char of a string
 * starting with the first one
 * @str: input
 * return 0 (sucess)
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
