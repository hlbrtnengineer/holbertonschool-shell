#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_str - prints string
 * @args: argument
 * @count: length of string
 *
 * Return: nothing
 */

void print_str(int *count, va_list args)
{
	char *str = va_arg(args, char *);

	while (*str)
	{
		write(1, str, 1);
		if (*str != '\n')
			(*count)++;
		str++;
	}
}
